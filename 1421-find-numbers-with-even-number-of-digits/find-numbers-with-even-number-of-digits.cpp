class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n; i++){
            int j = nums[i];
            int count1 = 0;
            while(j > 0){
                count1++;
                j /= 10;
            }
            if(count1 % 2 == 0){
                count++;
            }
        }
        return count;   
    }
};