class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {

        //Directional segment++ for every two moves
        vector<vector<int>> retVal;
        vector<int> temp (2, 0);
        temp[0] = rStart;
        temp[1] = cStart;
        int dir = 0;  // 0 = r, 1 = d, 2 = l, 3 = u
        int len = 1;  // The length of the current segment
    
        while (retVal.size() < rows * cols) {
            for (int i = 0; i < len; ++i) {
                if ((temp[0] >= 0 && temp[0] < rows) && (temp[1] >= 0 && temp[1] < cols)) {
                    retVal.push_back(temp);
                }   

                //Directional step
                if (dir == 0) temp[1]++;       
                else if (dir == 1) temp[0]++;   
                else if (dir == 2) temp[1]--;   
                else temp[0]--;                

                }
        
            //Changing direction
            dir = (dir + 1) % 4;
        
            //Changing length
            if (dir == 0 || dir == 2) {
                len++;
            }
        }

        return retVal;
    }
};