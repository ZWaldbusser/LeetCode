class Solution {
public:
    int differenceOfSums(int n, int m) {
        int retVal = 0;
        for(int i = 1; i <= n; i++) {
            if(i % m == 0) {
                retVal -= i;
            } else {
                retVal += i;
            }
        }
        return retVal;
    }
};