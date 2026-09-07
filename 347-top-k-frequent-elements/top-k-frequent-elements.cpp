class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(int i = 0; i < n; i++){
            mpp[nums[i]]++;
        }
        while(ans.size() < k){
            int max = 0;
            int element = 0;
            for(auto x : mpp){
                if(x.second > max){
                    max = x.second;
                    element = x.first;
                }
            }
            ans.push_back(element);
            mpp.erase(element);
        }
        return ans;
    }
};