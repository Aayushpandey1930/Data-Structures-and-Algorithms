class Solution {
public:
    int mySqrt(int x) {
        // return sqrt(x);
        // methode 2....
        int ans = 0;
        long long lo = 0 , hi = x;
        while(lo <= hi){
            long long mid =(lo + hi )/2;
            if(mid*mid == (long long) x)
            { 
               return mid;
            }
            else if(mid * mid > (long long) x) hi = mid-1;
            else {
                lo = mid +1;
                ans = mid;
            }
        } return ans;
    }
};