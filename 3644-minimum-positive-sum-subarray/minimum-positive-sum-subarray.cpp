class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int mini = INT_MAX;
        bool flag = false;
        for(int i = 0; i < nums.size(); i++){
             int sum = 0;
            for(int j = i; j < nums.size() && j < i+r; j++){
                sum += nums[j];
                int len = j - i + 1;
                if(len >= l && len <= r && sum > 0){
                    mini = min(mini, sum);
                    flag = true;
                }
            }
        }
        if(flag == false) 
            return -1;
        else 
            return mini;
    }
};