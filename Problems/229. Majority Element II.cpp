class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        float targetVal = floor(nums.size()/3);
        unordered_map<int, int> m;
        vector<int> retVal;
        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
            if(m[nums[i]] > targetVal && find(retVal.begin(), retVal.end(), nums[i]) == retVal.end()) {
                retVal.push_back(nums[i]);
            }
        }

        return retVal;
    }
};