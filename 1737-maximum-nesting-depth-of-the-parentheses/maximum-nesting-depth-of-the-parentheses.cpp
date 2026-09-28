class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int count = 0;
        int maxcount = 0;
        for(char x : s){
            if(x == '('){
                ++count;
                maxcount = max(maxcount, count);
            }
            else if(x == ')'){ 
                --count;
            }
        }
        return maxcount;
    }
};