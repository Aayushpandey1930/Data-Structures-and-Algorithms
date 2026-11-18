class Solution {
public:
    int countCollisions(string directions) {
        int s = directions.size();
        int count = 0;
        int i = 0; 
        int j = s - 1;
        while(i < s && directions[i] == 'L'){
            i++;
        }
        while(j >= i && directions[j] == 'R'){
            j--;
        }
        for(int k = i; k <= j; k++){
            if(directions[k] != 'S'){
                count++;
            }
        }    
        return count ;
    }
};