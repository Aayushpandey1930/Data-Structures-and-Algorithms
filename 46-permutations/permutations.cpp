class Solution {
public:
    void permutations(vector<int>& nums,int idx, vector<vector<int>>& finalans) {
        if (idx == nums.size()) {
            finalans.push_back(nums);
            return;
        }
        for (int i = idx; i < nums.size(); i++) {
            swap(nums[idx], nums[i]);
            permutations(nums,idx+1, finalans);
            swap(nums[idx], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> finalans;
        permutations(nums,0, finalans);
        return finalans;
    }
};