class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int ans = matrix[0][0];
        vector<int> v;
        for (int rows = 0; rows < m; rows++) {
            int minindex = matrix[rows][0];
            int colmin = 0;
            for (int col = 1; col < n; col++) {
                if (minindex > matrix[rows][col]) {
                    minindex = matrix[rows][col];
                    colmin = col;
                }
            }
            bool lucky = true;
            for(int k = 0; k < m; k++){
                if(matrix[k][colmin] > minindex){
                    lucky = false;
                    break;
                }
            }
            if(lucky){
                v.push_back(minindex);
            }
        }
        return v;
    }
};