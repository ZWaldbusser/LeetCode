class Solution {
public:

    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        //O(m*n) complexity! (When in doubt, Hashmaps)
        vector<vector<int>> retVal;
        unordered_map<int, int> oneRow;
        unordered_map<int, int> oneCol;
        unordered_map<int, int> zeroesRow;
        unordered_map<int, int> zeroesCol;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j]) oneRow[i]++, oneCol[j]++;
                else zeroesRow[i]++, zeroesCol[j]++;
            }
        }
            

        for(int i = 0; i < grid.size(); i++) { //Number of rows (length of columns)
            vector<int> temp;
            for(int j = 0; j < grid[0].size(); j++) {
                temp.push_back(oneRow[i] + oneCol[j] - zeroesRow[i] - zeroesCol[j]);
            }
            retVal.push_back(temp);
        }


        return retVal;
    }
};