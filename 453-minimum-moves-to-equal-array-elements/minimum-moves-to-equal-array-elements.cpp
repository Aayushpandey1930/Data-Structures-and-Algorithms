class Solution {
public:
    int minMoves(vector<int>& nums) {

        // method 1... but time limit exceeded...
        // int n = nums.size();
        // int count = 0;
        // if (n == 1)
        //     return 0;
        // while (true) {
        //     int mini = *min_element(nums.begin(), nums.end());
        //     int maxi = *max_element(nums.begin(), nums.end());
        //     if(mini == maxi) return count;
        //     for (int i = 0; i < n; i++) {
        //         if (nums[i] != mini) {
        //             nums[i] += 1;
        //         }
        //         count++;
        //     }
        // }    
        // return count;


        int n = nums.size();
        int count = 0;
        int mini = *min_element(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            count += nums[i] - mini;
        }
        return count;
    }
};