class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int left = 0;
        int right = n - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            int max_row = 0;
            for (int i = 0; i < m; i++) {
                if (mat[i][mid] > mat[max_row][mid]) {
                    max_row = i;
                }
            }
            if (mat[max_row][mid] < mat[max_row][mid + 1]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        int max_row = 0;
        for (int i = 0; i < m; i++) {
            if (mat[i][left] > mat[max_row][left]) {
                max_row = i;
            }
        }
        return {max_row, left};
    }
};
