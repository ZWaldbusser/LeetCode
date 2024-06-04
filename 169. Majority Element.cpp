class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        int n = nums.size() / 2;
        for(int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }
        for (auto i : map) {
            if (i.second > n) {
                return i.first;
            }
        }
        return 0;
    }
};