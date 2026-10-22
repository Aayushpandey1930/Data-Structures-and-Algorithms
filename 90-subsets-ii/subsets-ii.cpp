class Solution {
public:
    void helper(vector<int>& nums, vector<int>& ans,
                vector<vector<int>>& finalans, int idx) {
        
        finalans.push_back(ans);

        for (int i = idx; i < nums.size(); i++) {
            if (i > idx && nums[i] == nums[i - 1]) {
                continue;
            }

            ans.push_back(nums[i]);
            helper(nums, ans, finalans, i + 1);
            ans.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> finalans;
        vector<int> ans;

        helper(nums, ans, finalans, 0);

        return finalans;
    }
};