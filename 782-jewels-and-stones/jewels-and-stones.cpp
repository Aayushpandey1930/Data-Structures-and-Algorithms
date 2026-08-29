class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> st;
        for(auto x: jewels){
            st.insert(x);
        }
        int count = 0;
        for(auto x: stones){
            if(st.count(x)){
                count++;
            }
        }
        return count;
    }
};