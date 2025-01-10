class Solution {
public:

    void expand(vector<vector<int>>& matrix, int i, int j) {
        
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> rows;
        vector<int> columns;
        for(int i = 0; i < matrix.size(); ++i) {
            for(int j = 0; j < matrix[0].size(); ++j) {
                if(matrix[i][j] == 0) {
                    rows.push_back(i);
                    columns.push_back(j);
                }
            }
        }
        //0 out rows
        for(int i = 0; i < rows.size(); ++i) {
            for(int j = 0; j < matrix[0].size(); ++j) {
                matrix[rows[i]][j] = 0;
            }
        }
        //Columns
        for(int i = 0; i < columns.size(); ++i) {
            for(int j = 0; j < matrix.size(); ++j) {
                matrix[j][columns[i]] = 0;
            }
        }
    }
};