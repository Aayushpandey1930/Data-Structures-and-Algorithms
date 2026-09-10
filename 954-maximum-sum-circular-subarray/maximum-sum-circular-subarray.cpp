class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = nums[0];

        int cmax = nums[0];
        int sum1 = nums[0];

        int cmin = nums[0];
        int sum2 = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int x = nums[i];
            total += x;

            sum1 = max(x, sum1 + x);
            cmax = max(cmax, sum1);

            sum2 = min(x, sum2 + x);
            cmin = min(cmin, sum2);
        }
        if (cmax < 0) {
            return cmax;
        }
        int circularsum = total - cmin;
        return max(cmax, circularsum);
    }
};