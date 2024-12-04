class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size() < 3) return false;
        int i = 0;
        int j = -1;
        for(int n = 1; n < nums.size(); ++n) {
            if(nums[n] <= nums[i]) i = n;
            else if(j == -1 || nums[n] <= nums[j]) j = n;
            else return true;
        }
        return false;
    }
};