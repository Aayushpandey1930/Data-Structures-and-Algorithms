class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0){
                ans.push_back(nums[i]);
            }
        }
        unordered_map<int, int> mpp;
        for(int i = 0; i < ans.size(); i++){
            mpp[ans[i]]++;
        }
        int max = 0;
        int element = -1;
        for(auto x: mpp){
            if(x.second > max || x.second == max && x.first <element){
                max = x.second;
                element = x.first;
            }
        }
        return element;
    }
};