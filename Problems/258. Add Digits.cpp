class Solution {
public:
    int addDigits(int num) {
        if(num < 10) return num;
        int retVal = 0;
        int twoDigits = true;
        while(num > 0) {
            retVal += num%10;
            num /= 10;            
        }
        
        return addDigits(retVal);
        
    }
};