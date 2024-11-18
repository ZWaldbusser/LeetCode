class Solution {
public:
    int mirrorReflection(int p, int q) {
        //Ignore the case where the laser hits a non-receptor corner
        //q == p/ANY power of 2, receptor is 2

        //Reduce the box down as much as we can
        while(p%2 == 0 && q%2 == 0) {
            p /=2;
            q /=2;
        }
        //Just a modulus problem.
        //distance = p - q

        //Determine the receptor
        if (p%2 == 0) return 2; //Even box
        if (q%2 == 0) return 0; //Odd box, odd laser travel distance, odd horizontal bounces, even vertical bounces
        return 1; //Odd Box, even laser travel distance, odd horizontal bounces, odd vertical bounces
    }
};