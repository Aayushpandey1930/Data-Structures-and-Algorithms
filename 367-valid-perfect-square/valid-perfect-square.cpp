class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 0)
            return false;
        long long x = 1;
        long long y = num;
        while (x <= y) {
            long long mid = x + (y - x) / 2;
            if (mid * mid == num)
                return true;
            else if (mid * mid < num)
                x = mid + 1;
            else
                y = mid - 1;
        }
        return false;
    }
};