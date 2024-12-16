class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> retVal;
        int wallTop = 0;
        int wallBot = matrix.size()-1;
        int wallLeft = 0;
        int wallRight = matrix[0].size()-1;

        while(wallLeft <= wallRight && wallTop <= wallBot) {
            //Right
            cout << "Right" << endl;
            for(int i = wallLeft; i <= wallRight; i++) {
                
                cout << matrix[wallTop][i] << endl;
                retVal.push_back(matrix[wallTop][i]);
            }
            wallTop += 1;
            //Down
            cout << "Down" << endl;
            for(int i = wallTop; i <= wallBot ; i++) {
                
                cout << matrix[i][wallRight] << endl;
                retVal.push_back(matrix[i][wallRight]);
            }
            wallRight -= 1;

            //Left
            if(wallTop <= wallBot) {
                cout << "Left" << endl;
                for(int i = wallRight; i >= wallLeft; i--) {
                    
                    cout << matrix[wallBot][i] << endl;
                    retVal.push_back(matrix[wallBot][i]);
                }
                wallBot -= 1;
            }
            
            //Up
            if(wallLeft <= wallRight) {
                cout << "Up" << endl;
                for(int i = wallBot; i >=  wallTop; i--) {
                    
                    cout << matrix[i][wallLeft] << endl;
                    retVal.push_back(matrix[i][wallLeft]);
                }
                wallLeft += 1;
            }

        }

        return retVal;
    }
};