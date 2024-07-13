class Solution {
public:
    int scoreOfString(string s) {
        int retVal = 0;
        for(int i = 0; i < s.size()-1; i++) {
            int a = s[i];
            int b = s[i+1];
            if(a > b){
                retVal += (a - b);
            } else {
                retVal += (b - a);
            }
        }
        return retVal;
    }
};