class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> ans;
        for (auto i : arr){
            ans[i]++;
        }
        int lucky = -1;
        for(auto x : ans){
            if(x.first == x.second){
                lucky = max(x.first, lucky);
            }
        }
        return lucky;
    }
};