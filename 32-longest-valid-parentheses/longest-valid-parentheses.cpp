class Solution {
public:
    int longestValidParentheses(string s) {
        int count = 0;
        stack<int> st;
        st.push(-1);
        for (int x = 0; x < s.size(); x++){
            if (s[x] == '(') {
                st.push(x);
            } else if (s[x] == ')') {
                st.pop();
                if(st.empty()){
                    st.push(x);
                }else{
                    count = max(count, x - st.top());
                }
            }
        }
        return count;
    }
};