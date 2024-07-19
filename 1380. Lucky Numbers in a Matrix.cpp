class Solution {
public:

    bool isMinRow(vector<int> row, int c) {
        int retVal = row[c];
        for(int i = 0; i < row.size(); i++) {
            if(retVal > row[i]) {
                return false;
            }
        }
        return true;
    };
    bool isMaxCol(vector<vector<int>> matrix, int r, int c) {
        int retVal = matrix[r][c];
        for(int i = 0; i < matrix.size(); i++) {
            if(retVal < matrix[i][c]) {
                return false;
            }
        }
        return true;
    };

    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> retVal;
        unordered_map<int, int> luckyRow;
        unordered_map<int, int> luckyCol;

        for(int r = 0; r < matrix.size(); r++) {
            for(int c = 0; c < matrix[0].size(); c++) {
                std::cout << matrix[r][c] << std::endl;
                if(luckyRow[r] == 0 && luckyCol[c] == 0) {
                    std::cout << matrix[r][c] << std::endl;
                    if(isMaxCol(matrix, r, c)) {
                        luckyCol[c] = r;
                        if(isMinRow(matrix[r], c)) {
                            
                            retVal.push_back(matrix[r][c]);
                            luckyRow[r] = c;
                        }
                    }
                }
            
            }
        }
        return retVal;
    }
};