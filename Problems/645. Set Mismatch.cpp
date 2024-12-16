class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int> retVal(2);
        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        int numRep;
        int numRepped;
        for(int i = 1; i < nums.size()+1; i++) {
            if(m[i] == 2) {
                retVal[0] = i;
            }
            if(m[i] == 0) {
                retVal[1] = i;
            }
        }
        return retVal;
    }
};