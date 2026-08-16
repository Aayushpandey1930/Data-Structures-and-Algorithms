class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        // Method 1...
        // Brute force here TLE occure .....

        // int n = nums.size();
        // vector<long long> ans(n);
        // int j = 0;
        // for(int i = 0; i < n; i++){
        //     long long sum = 0;
        //     for(int j = 0; j < n; j++){
        //         if(nums[j] == nums[i]){
        //             sum += llabs(i-j);
        //         }
        //     }
        //     ans[i] = sum;
        // }
        // return ans;

        
        int n = nums.size();
        vector<long long> ans(n);

        unordered_map<int, long long> count;
        unordered_map<int, long long> sum;

        // Left side contribution
        for (int i = 0; i < n; i++) {
            int x = nums[i];

            ans[i] += (long long)i * count[x] - sum[x];

            count[x]++;
            sum[x] += i;
        }

        // Reset for right side
        count.clear();
        sum.clear();

        // Right side contribution
        for (int i = n - 1; i >= 0; i--) {
            int x = nums[i];

            ans[i] += sum[x] - (long long)i * count[x];

            count[x]++;
            sum[x] += i;
        }

        return ans;
    }
};
