class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        // unordered_set<char> st;
        // for(auto x: jewels){
        //     st.insert(x);
        // }
        // int count = 0;
        // for(auto x: stones){
        //     if(st.count(x)){
        //         count++;
        //     }
        // }
        // return count;
        int count = 0;
        for(int i = 0; i <jewels.size(); i++){
            for(int j = 0; j <stones.size(); j++){
                if(jewels[i] == stones[j]){
                    count++;
                }
            }
        }
        return count;
    }
};