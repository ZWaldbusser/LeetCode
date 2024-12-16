class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        //This is a math problem rather than coding.
        //In our examples: 4 buckets can be tested with 2 pigs.
        //Given range(5, 9), 15, 30: answer is still 2. Log based answer.
        int numTests = (minutesToTest/minutesToDie)+1;
        int retVal = ceil(log2(buckets)/log2(numTests));
        return retVal;
    }
};