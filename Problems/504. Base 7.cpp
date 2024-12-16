class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) {
            return "0";
        }
        bool isNegative = false;
        string retVal = "";
        if(num < 0) {
            isNegative = true;
        }
        num = abs(num);
        while(num != 0){
            retVal += (to_string(num%7));
            num /= 7;
        }
        if(isNegative) {
            retVal += '-';
        }
        reverse(retVal.begin(), retVal.end());
        return retVal;
    }
};