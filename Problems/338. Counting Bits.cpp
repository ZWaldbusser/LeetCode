class Solution {
public:
    vector<int> countBits(int n) {
        std::vector<int> retVal(n + 1, 0); 
    
        //From notebook:
            //Say we take an existing number and add a binary place value
            //The number of 1's will be +1 if its odd.
        for (int i = 1; i <= n; ++i) {
            int j = i >> 1;
            retVal[i] = retVal[i >> 1] + (i & 1); 
        }

        return retVal;
    }
};