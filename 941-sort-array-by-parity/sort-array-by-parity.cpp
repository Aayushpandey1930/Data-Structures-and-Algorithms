class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // int n = nums.size();
        // int i = 0;
        // int j = 0;
        // while (j <= n - 1) {
        //     if (nums[j] % 2 == 0) {
        //         swap(nums[i], nums[j]);
        //         i++;
        //         j++;
        //     }else{
        //         j++;
        //     }
        // }
        // return nums;


        // Method 2....
        int i = 0, j = nums.size()-1;

        while(i < j){
            if(nums[i] % 2 == 0){
                i++;
            }else if(nums[j] % 2 != 0){
                j--;
            }else{
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
        }
        return nums;
    }
};