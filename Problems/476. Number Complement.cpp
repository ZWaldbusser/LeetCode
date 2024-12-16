class Solution {
public:
    int findComplement(int num) {
        int retVal = 0;
        int power = 0;
        while(num > 0) {
            if(num % 2) {
                //1
                --num;

            } else {
                //0
                retVal += pow(2, power);
            }
            num /= 2;
            ++power;
        }
        return retVal;
    }
};