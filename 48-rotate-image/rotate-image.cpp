class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i = 0; i < n; i++){
            int k = 0;
            int j = n-1;{
                while(k <= j){
                    swap(matrix[i][k], matrix[i][j]);
                    k++;
                    j--;
                }
            }
        }
        return;
    }
};