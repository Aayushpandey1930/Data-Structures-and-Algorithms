class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> st;
        for(auto x: s){
            if(st.count(x)){
                return x;
            }
            else {
                st.insert(x);
            }
        }
        return '\0';
    }
};