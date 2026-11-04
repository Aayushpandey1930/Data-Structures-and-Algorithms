class Solution {
public:
    int findMin(vector<int>& nums) {
        // int mini = *min_element(nums.begin(), nums.end());
        // return mini;
        int mini = INT_MAX;
        for(auto c : nums){
            if(mini > c) mini = c;
        }
        return mini;
    }
};