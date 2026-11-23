class Solution {
public:
    bool checkString(string s) {
        // int n = s.length();
        // for(int x = 0; x < n; x++){
        //     if(s[x] =='b'){
        //         for(int i = x+1; i <n;i++){
        //             if(s[i] == 'a'){
        //                 return false;
        //             }
        //         }
        //     }
        // }
        // return true;

        int n = s.length(); 
        for(int i = 0; i < n; i++){
            if(s[i+1] == 'a' && s[i] == 'b'){
                return false;
            }
        }
        return true;
    }
};