class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> ans;
        int n = grid.size();
        int m = grid[0].size();
        bool flag = true;
        for(int i  = 0; i < n; i++){
            if( i % 2 == 0){
                for(int j = 0; j < m; j++){
                    if(flag){
                        ans.push_back(grid[i][j]);
                    }
                    flag = !flag;
                }
            }
            else{
                for(int j = m-1; j >= 0; j--){
                    if(flag){
                        ans.push_back(grid[i][j]);
                    }
                    flag = !flag;
                }
            }
        }
        return ans;
    }
};