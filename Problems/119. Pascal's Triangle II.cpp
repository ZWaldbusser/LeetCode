class Solution {
public:
    vector<int> getRow(int rowIndex) {
        //The size is as large as the index
        //We need Pascals Rule
        vector<int> row(rowIndex + 1, 1);
        for(int i = 1; i < rowIndex; i++) {
            row[i] = (long long)row[i - 1] * (rowIndex - i + 1) / i;
        }
        return row;
        
    }
};