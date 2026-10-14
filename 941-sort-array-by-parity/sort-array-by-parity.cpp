class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        while (j <= n - 1) {
            if (nums[j] % 2 == 0) {
                swap(nums[i], nums[j]);
                i++;
                j++;
            }else{
                j++;
            }
        }
        return nums;
    }
};