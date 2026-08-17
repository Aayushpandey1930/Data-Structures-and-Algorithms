class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        // This is correct vapproach but here TEL occur.......

        // int n = nums.size();
        // int m = operations.size();
        // unordered_map<int, int> mp;
        // for(int i = 0; i < m; i ++){
        //     mp[operations[i][0]] = operations[i][1];
        // }
        // for(int i = 0 ; i < n; i++){
        //     while(mp.find(nums[i]) != mp.end()) {
        //         nums[i] = mp[nums[i]];
        //     }
        // }
        // return nums;

        // Method 2...
        int n = nums.size();
        unordered_map<int, int> pos;
        for(int i = 0; i <n; i++){
            pos[nums[i]] = i;
        }
        for(int i = 0; i < operations.size(); i++){
            int oldvalue = operations[i][0];
            int newvalue = operations[i][1];
            int index = pos[oldvalue];
            nums[index] = newvalue;
            pos.erase(oldvalue);
            pos[newvalue] = index;
        }
        return nums;
    }
};