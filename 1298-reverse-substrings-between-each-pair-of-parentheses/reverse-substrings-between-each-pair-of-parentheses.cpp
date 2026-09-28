class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        for(auto x : s){
            if( x == '('){
                st.push(x);
            }else if(x == ')'){
                string temp;
                while(st.top() != '('){
                    temp += st.top();
                    st.pop();
                }
                st.pop();
                for(auto ch : temp){
                    st.push(ch);
                } 
            }
            else{
                st.push(x);
            }
        }

        string ans;
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};