class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        vector<int> nums2 = nums1;
        int mn = *min_element(nums1.begin(), nums1.end());
        for (int i = 0; i < n; i++) {
            if (mn % 2 ==0  && nums1[i] % 2 != 0) {
                return false;
            }
        }
        return true;
    }
};