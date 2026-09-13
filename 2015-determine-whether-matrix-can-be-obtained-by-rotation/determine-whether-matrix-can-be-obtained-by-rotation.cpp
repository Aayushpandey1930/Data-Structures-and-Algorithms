class Solution {
public:
    void Rotatematrix(vector<vector<int>>& Matrix) {
        for (int i = 0; i < Matrix.size(); i++) {
            for (int j = i + 1; j < Matrix.size(); j++) {
                swap(Matrix[i][j], Matrix[j][i]);
            }
        }
        for (int k = 0; k < Matrix.size(); k++) {
            int i = 0;
            int j = Matrix.size() - 1;
            while (i <= j) {
                swap(Matrix[k][i], Matrix[k][j]);
                i++;
                j--;
            }
        }
        return;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for (int i = 0; i < 4; i++) {
            if (mat == target) {
                return true;
            }
            Rotatematrix(mat);
        }

        return false;
    }
};