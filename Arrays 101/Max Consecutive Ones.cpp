class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int retVal = 0;
        int temp = 0;
        for(auto i : nums) {
            if(i == 1) {
                temp++;
            } else if(i == 0) {
                retVal = max(retVal, temp);
                temp = 0;
            }
            
        }
        retVal = max(retVal, temp);
        return retVal;
    }
};