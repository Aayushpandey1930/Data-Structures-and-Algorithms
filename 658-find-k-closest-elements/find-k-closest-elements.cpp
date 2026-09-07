class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        // method 1... using binary search ....

        // int i = 0;
        // int j = nums.size() - k;
        // while(i < j){
        //     int mid = (i + j)/2;
        //     if(x - nums[mid] > nums[mid + k ] - x){
        //         i = mid+1;
        //     }
        //     else j = mid;
        // }
        // return vector<int>(nums.begin() +i, nums.begin() +i+k);

        // Method 2 ... using sliding window ....
        int a = 0;
        int b = nums.size() - k;
        for(int i = 0; i < b; i++){
            if(abs(nums[i] -x) > abs(nums[i+k] - x)){
                a = i + 1;
            }
        }
        return vector<int>(nums.begin() + a, nums.begin() + a + k);
    }
};