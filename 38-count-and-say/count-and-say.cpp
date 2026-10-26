class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        string s = countAndSay(n-1);
        string t = "";
        int freq = 1;
        char ch = s[0];
        for(int i = 1; i < s.size(); i++){
            char dh = s[i];
            if(ch == dh){
                freq++;
            }else{
                t += (to_string(freq)+ch);
                freq = 1;
                ch = dh;
            }
        }
        t += (to_string(freq)+ch);
        return t;
    }
};