class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }
        int m = matrix.size();
        int n = matrix[0].size();
        int row = 0;
        int col = n - 1;
        while (m > row && col >= 0) {
            int cur = matrix[row][col];
            if (cur == target) {
                return true;
            } else if (cur < target) {
                row++;
            } else {
                col--;
            }
        }
        return false;
    }
};
