class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        vector<int> nums = {0};
        nums.insert(nums.end(), flowerbed.begin(), flowerbed.end());
        nums.push_back(0);
        for(int i = 1; i < nums.size(); i++){
            if((nums[i-1] + nums[i] + nums[i+1]) == 0){
                nums[i] = 1;
                n = n-1;
            }
        }
        if(n <= 0) return true;
        else return false;
    }
};