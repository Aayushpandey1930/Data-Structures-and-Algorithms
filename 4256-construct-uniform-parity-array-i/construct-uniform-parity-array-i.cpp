class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        vector<int> nums2(n);
        for(int i = 0; i < n; i++){
            if(nums2[i] % 2 != nums2[0] % 2){
                return false;
            }
        }
        return true;
    }
};