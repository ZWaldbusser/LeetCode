class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> retVal;
        unordered_map<int, int> m;
        for(auto i : nums1) {
            m[i]++;
        }
        for(auto i : nums2) {
            if(m[i] != 0) {
                retVal.push_back(i);
                m[i] = 0;
            }
        }
        return retVal;
    }
};