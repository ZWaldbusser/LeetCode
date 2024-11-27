class Solution {
public:
    int trailingZeroes(int n) {
        if(5 > n) return 0;
        int zeroes = 0;
        while (n > 1) {
            n /= 5;
            zeroes += n;
        }
        return zeroes;
    }
};