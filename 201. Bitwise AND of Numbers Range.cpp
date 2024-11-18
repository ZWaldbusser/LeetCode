class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int retVal = 0;
        //go until the numbers are the same
        while (left < right) {
            left >>= 1;
            right >>= 1;
            //keep track of shifts
            ++retVal;
        }
    
        //shift back to original position
        return left << retVal;
        
    }
};