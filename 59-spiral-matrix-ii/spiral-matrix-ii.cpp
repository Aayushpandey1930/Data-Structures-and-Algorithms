class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int t = n*n;
        int minr = 0;
        int maxr = n-1;
        int minc = 0;
        int maxc = n-1;
        int count = 0;
        while(minr <= maxr && minc <= maxc && count < t){
            for(int i = minc; i <= maxc && count < t; i++){
                matrix[minr][i] = count +1;
                count++;
            }
            minr++;
            for(int j= minr; j <= maxr && count < t; j++){
                matrix[j][maxc] = count +1;
                count++;
            }
            maxc--;
            for(int i = maxc; i >= minc && count <t; i--){
                matrix[maxr][i] = count+1;
                count++;
            }
            maxr--;
            for(int j = maxr; j >= minr && count < t; j--){
                matrix[j][minc] = count +1;
                count++;
            }
            minc++;
        }
        return matrix;
    }
};