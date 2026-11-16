class Solution {
public:
    string digitSum(string s, int k) {
        int n = s.length();
        while(n > k){
            string temp = "";
            for(int i = 0; i < n; i = i+k){
                int sum = 0;
                for(int j = i; j < min(i+k ,n); j++){
                    sum += s[j] - '0';
                }
                temp += to_string(sum);
            }
            s = temp;
            n = s.length();
        }
        return s;
    }
};