class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int m = matrix.size();
        int n = matrix[0].size();
        int t = m*n;
        int minr = 0;
        int maxr = m-1;
        int minc = 0;
        int maxc = n-1;
        int count = 0;
        while(minr <= maxr && minc <= maxc && count < t){
            for(int i = minc; i <= maxc && count < t; i++){
                v.push_back(matrix[minr][i]);
                count++;
            }
            minr++;
            for(int j= minr; j <= maxr && count < t; j++){
                v.push_back(matrix[j][maxc]);
                count++;
            }
            maxc--;
            for(int i = maxc; i >= minc && count <t; i--){
                v.push_back(matrix[maxr][i]);
                count++;
            }
            maxr--;
            for(int j = maxr; j >= minr && count < t; j--){
                v.push_back(matrix[j][minc]);
                count++;
            }
            minc++;
        }
        return v;
    }
};