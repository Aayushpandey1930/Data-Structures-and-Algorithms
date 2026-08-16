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

        // int n = nums.size();
        // vector<long long> ans(n);

        // unordered_map<int, long long> count;
        // unordered_map<int, long long> sum;

        // // Left side contribution
        // for (int i = 0; i < n; i++) {
        //     int x = nums[i];

        //     ans[i] += (long long)i * count[x] - sum[x];

        //     count[x]++;
        //     sum[x] += i;
        // }

        // // Reset for right side
        // count.clear();
        // sum.clear();

        // // Right side contribution
        // for (int i = n - 1; i >= 0; i--) {
        //     int x = nums[i];

        //     ans[i] += sum[x] - (long long)i * count[x];

        //     count[x]++;
        //     sum[x] += i;
        // }

        // return ans;

        int n = nums.size();

        map<int, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        vector<long long> ans(n, 0);

        for (auto a : mp) {
            vector<int> temp = a.second;
            int m = temp.size();

            // Prefix sum of positions
            vector<long long> prefix(m + 1, 0);

            for (int i = 0; i < m; i++) {
                prefix[i + 1] = prefix[i] + temp[i];
            }

            for (int i = 0; i < m; i++) {
                // Distance from temp[i] to all positions on the left
                long long left = 1LL * temp[i] * i - prefix[i];

                // Distance from temp[i] to all positions on the right
                long long right =
                    (prefix[m] - prefix[i + 1]) - 1LL * temp[i] * (m - i - 1);

                ans[temp[i]] = left + right;
            }
        }

        return ans;
    }
};
