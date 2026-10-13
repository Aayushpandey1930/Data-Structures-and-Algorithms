class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        sort(nums.begin(), nums.end(), [](int a, int b){
           return 1LL * a * a < 1LL * b * b;
        });
        // int i = 0;
        // int j = 1;

        // while (j < nums.size()) {
        //     if (i % 2 == 0) {
        //         if (1LL * nums[i] * nums[i] < 1LL * nums[j] * nums[j]) {
        //             swap(nums[i], nums[j]);
        //         }
        //     } else {
        //         if (1LL * nums[i] * nums[i] > 1LL * nums[j] * nums[j]) {
        //             swap(nums[i], nums[j]);
        //         }
        //     }

        //     i++;
        //     j++;
        // }

        long long totalsum = 0;
        for (int i = 0; i < nums.size(); i++) {
            long long square = 1LL * nums[i] * nums[i];
            if (i < nums.size()/2) {
                totalsum -= square;
            } else {
                totalsum += square;
            }
        }
        return totalsum;
    }
};