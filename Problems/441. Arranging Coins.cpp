class Solution {
public:
    int arrangeCoins(int n) {
        int retVal = 1;
        while(n - retVal >= 0) {
            n -= retVal;
            ++retVal;
        }
        return retVal-1;
    }
};