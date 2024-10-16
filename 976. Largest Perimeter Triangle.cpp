class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        if(nums.size() < 3) {
            return 0;
        }
        int retVal = 0;
        sort(nums.begin(), nums.end(), greater<int>());
        for(int i = 0; i < nums.size() - 2; i++) {
            if(nums[i] < nums[i+1] + nums[i+2]) {
                return nums[i] + nums[i+1] + nums[i+2];
            }
        }
        return retVal;
    }
};