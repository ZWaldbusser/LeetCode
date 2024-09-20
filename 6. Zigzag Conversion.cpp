class Solution {
public:
    string convert(string s, int numRows) {
        if(s.size() == 1 || numRows == 1 || (s.size() <= numRows-1)) {
            return s;
        }
        std::vector<string> mat(numRows, "");

        int y = 0;
        int down = true;
        for(int i = 0; i < s.size(); i++) {
            std::cout << y << std::endl;
            mat[y] += s[i];
            if(y == 0 && !down) {
                down = true;
                y++;
                continue;
            }
            if(y >= numRows-1 && down) {
                down = false;
                y--;
                continue;
            }
            if(!down) {
                y--;
            } else {
                y++;
            }
        }



        string retVal;
        for(int i = 0; i < numRows; i++) {
            retVal += mat[i];
        }
        return retVal;
    }
};