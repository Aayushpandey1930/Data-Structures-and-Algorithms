class Solution {
public:
    int search(vector<int>& arr1, int target) {
        // if (!binary_search(arr1.begin(), arr1.end(), target)) return -1;
        // return lower_bound(arr1.begin(), arr1.end(), target) - arr1.begin();
        int n = arr1.size();
        int lo = 0;
        int hi = n - 1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (arr1[mid] == target)
                return mid;
            else if (arr1[mid] > target)
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        return -1;
    }
};