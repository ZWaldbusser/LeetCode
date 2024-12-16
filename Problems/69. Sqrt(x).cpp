class Solution {
public:
    int mySqrt(int x) {
        if(x <= 1) {
            return x;
        }
        long i = 1;
        while((i)*(i) < x) {
            if((i+1)*(i+1) > x) {
                return i;
            }
            i++;
        }
        return i;
    }
};