class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m1;
        unordered_map<int, int> m2;
        for(int i : nums1){m1[i]++;}
        for(int i : nums2){m2[i]++;}
        vector<vector<int>> retval(2);
        for(int i : nums1) {
            if(m1[i] >= 1 && m2[i] == 0) {retval[0].push_back(i); m1[i] = 0;}
        }
        for(int i : nums2) {
            if(m2[i] >= 1 && m1[i] == 0) {retval[1].push_back(i); m2[i] = 0;}
        }
        return retval;
    }
};