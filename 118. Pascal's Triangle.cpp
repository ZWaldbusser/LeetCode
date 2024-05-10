class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //Base Cases
        if(numRows == 0) {
            return {};
        }
        if(numRows == 1) {
            return {{1}};
        }
        //Recursive call back
        vector<vector<int>> previous = generate(numRows - 1); 
        vector<int> row(numRows, 1);

        //Set vals
        for(int i = 1; i < numRows - 1; i++) {
            row[i] = previous.back()[i-1] + previous.back()[i];
        }
        previous.push_back(row);
        return previous;
    }
};