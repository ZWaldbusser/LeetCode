class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> m;
        int retVal = 0;

        for(int i = 0; i < jewels.size(); i++) {
            m[jewels[i]]++;
        }
        for(int i = 0; i < stones.size(); i++) {
            if(m[stones[i]] == 1) {
                retVal++;
            }
        }
        return retVal;
    }
};