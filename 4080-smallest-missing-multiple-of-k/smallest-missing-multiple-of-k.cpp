class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        // method1...

        // set<int> st(nums.begin(), nums.end());
        // int ans = k;
        // while(st.count(ans)){
        //     ans += k;
        // }
        // return ans;

        // method2...
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % k == 0)
                mpp[nums[i]]++;
        }

        int count = 1;
        int product = 1;
        while (true) {
            product = k * count;
            if (mpp.find(product) == mpp.end())
                break;
            else count++;
        }
        return product;
    }
};