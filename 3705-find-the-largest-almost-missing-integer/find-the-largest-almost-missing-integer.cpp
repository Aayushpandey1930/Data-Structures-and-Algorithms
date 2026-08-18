// class Solution {
// public:
//     int largestInteger(vector<int>& nums, int k) {
//         int n = nums.size();
//         unordered_map<int, int> freq;

//         // Count occurrences of every number in each k-sized window
//         for (int i = 0; i <= n - k; i++) {
//             unordered_map<int, int> mp;

//             for (int j = i; j < i + k; j++) {
//                 mp[nums[j]]++;
//             }

//             // A number appearing exactly once in this window
//             for (auto &[num, count] : mp) {
//                 if (count == 1) {
//                     freq[num]++;
//                 }
//             }
//         }

//         int ans = -1;

//         for (auto &[num, count] : freq) {
//             if (count == 1) {
//                 ans = max(ans, num);
//             }
//         }

//         return ans;
//     }
// };

class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        // Case 1: Every element is its own subarray
        if (k == 1) {
            unordered_map<int, int> freq;

            for (int x : nums) {
                freq[x]++;
            }

            int ans = -1;

            for (auto &[x, count] : freq) {
                if (count == 1) {
                    ans = max(ans, x);
                }
            }

            return ans;
        }

        // Case 2: Whole array is one subarray
        if (k == n) {
            return *max_element(nums.begin(), nums.end());
        }

        // Case 3: 1 < k < n
        int ans = -1;

        // Check first element
        bool firstUnique = true;

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[0]) {
                firstUnique = false;
                break;
            }
        }

        if (firstUnique) {
            ans = max(ans, nums[0]);
        }

        // Check last element
        bool lastUnique = true;

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[n - 1]) {
                lastUnique = false;
                break;
            }
        }

        if (lastUnique) {
            ans = max(ans, nums[n - 1]);
        }

        return ans;
    }
};