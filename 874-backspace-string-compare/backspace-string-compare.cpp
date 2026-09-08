class Solution {
public:
    string removebackspace(string s) {
        stack<char> st;
        for (char x : s) {
            if (x == '#') {
                if (!st.empty()) {
                    st.pop();
                }
            } else {
                st.push(x);
            }
        }
        string ans;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
    bool backspaceCompare(string s, string t) {
        s = removebackspace(s);
        t = removebackspace(t);
        return s == t;
    }
};