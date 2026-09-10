class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int n = nums.size();
        // int sum = 0;
        // int maxi = nums[0];
        // for (int i = 0; i < n; i++) {
        //     sum += nums[i];
        //     if (sum > maxi) {
        //         maxi = sum;
        //     }
        //     if (sum < 0) {
        //         sum = 0;
        //     }
        // }
        // return maxi;

        int n = nums.size();
        int cmax = nums[0];
        int sum = nums[0];
        for(int i = 1; i < n ; i++){
            sum = max(nums[i], sum + nums[i]);
            cmax = max(cmax, sum);
        }
        return cmax;
    }
};