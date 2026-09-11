class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();
        int sum1 = 0;
        int sum2 = 0;
        if(n == 1) return true;
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0 && nums[i] <= 9) {
                sum1 += nums[i];
            }
            if (nums[i] >= 10 && nums[i] <= 99) {
                sum2 += nums[i];
            }
        }
        if (sum1 != sum2) {
            return true;
        } else
            return false;
    }
};