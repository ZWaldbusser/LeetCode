class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        //Shifters
        uint32_t retVal = 0;

        for(int i = 0; i < 32; i++) {
            long long lsBit = n & 1;

            n = n >> 1;

            retVal = retVal << 1;

            retVal = retVal | lsBit;
        }

        return retVal;
    }
};