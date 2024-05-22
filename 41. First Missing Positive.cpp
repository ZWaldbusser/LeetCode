class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int smallestInt = 1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {
                if(nums[i] == smallestInt) {
                    smallestInt += 1;
                } else if(nums[i] > smallestInt) {
                    return smallestInt;
                }
            }
        }
        return smallestInt;
    }
};