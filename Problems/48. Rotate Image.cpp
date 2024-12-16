class Solution {
public:
    void swapVals(vector<vector<int>>& matrix, int x1, int y1, int x2, int y2) {
        int temp = matrix[y1][x1];
        matrix[y1][x1] = matrix[y2][x2];
        matrix[y2][x2] = temp;

    }
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = i+1; j < matrix.size(); j++) {
                swapVals(matrix, i, j, j, i);
            }
        }
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix.size()/2; j++) {
                swapVals(matrix, j, i, matrix.size()-j-1, i);
            }
        }
    }
};