class Solution {
public:
    int hammingDistance(int x, int y) {
        int bits = x ^ y;
        return __builtin_popcount(bits);
    }
};