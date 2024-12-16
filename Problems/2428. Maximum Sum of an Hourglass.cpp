class Solution {
public:
    int calculateMax(vector<vector<int>>& grid, int i, int j) {
        return(grid[i][j] + grid[i][j+1] + grid[i][j+2] + grid[i+1][j+1] + grid[i+2][j] + grid[i+2][j+1] + grid[i+2][j+2]);
    }
    int maxSum(vector<vector<int>>& grid) {
        int retVal = -1;
        for(int i = 0; i < grid.size()-2; i++) {
            for(int j = 0; j < grid[0].size()-2; j++) {
                retVal = max(retVal, calculateMax(grid, i, j));
            }
        }
        return retVal;
    }
};