class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> retVal;
        for(int i = 0; i < nums.size(); i++) {
            retVal.push_back(nums[nums[i]]);
        }
        return retVal;
    }
};