class Solution {
public:
    bool checkDivisibility(int n) {
        if( n == 0) return false;
        int temp = n;
        int sum = 0;
        int product = 1;
        while( temp > 0){
            int digit = 0;
            digit = temp % 10 ;
            sum += digit;
            product *= digit;
            temp = temp/10;
        }
        int total_sum = sum + product;
        if(n % total_sum == 0) {
            return true;
        }
        else {
            return false;
        }   
    }
};