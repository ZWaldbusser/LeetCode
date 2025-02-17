class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> paths(n, 0);
        for(int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j){
                if (i == 0 && j == 0) {
                    paths[j] = grid[i][j];
                } else if (i == 0) {
                    paths[j] = paths[j - 1] + grid[i][j];
                } else if (j == 0) {    
                    paths[j] += grid[i][j];
                } else {
                    paths[j] = grid[i][j] + min(paths[j], paths[j - 1]);
                }
            }
        }
        return paths[n-1];
    }
};