class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0) {
            return false;
        }
        if (n==1) {
            return true;
        }
        return !(n%2) && isPowerOfTwo(n/2);
    }
};