class Solution {
public:
    int addDigit(vector<int>& nums){
        int sum = 0;
        for(int i = 0; i< nums.size(); i++){
            int j = nums[i];
            while(j > 0){
                sum += j % 10;
                j /= 10;
            }
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int elementsum = 0;
        for(int i = 0; i < nums.size(); i++){
            elementsum += nums[i];
        }
        int difference = abs(elementsum - addDigit(nums));
        return difference;
    }
};