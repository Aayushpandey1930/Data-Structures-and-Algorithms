class Solution {
public:
    void helper(vector<int>& arr, vector<vector<int>>& finalans, int idx,
                vector<int> ans) {
        if (idx == arr.size()) {
            finalans.push_back(ans);
            return;
        }
        helper(arr, finalans, idx+1, ans);
        ans.push_back(arr[idx]);
        helper(arr, finalans, idx+1, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> finalans;
        helper(nums,finalans, 0, ans);
        return finalans;
    }
};