class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //Kadane's algorithm
        int retVal = nums[0];
        int maxV = nums[0];
        int minV = nums[0];
        for(int i = 1; i < nums.size(); ++i) {
            if (nums[i] < 0) {
                swap(maxV, minV);
            }
            maxV = max(nums[i], nums[i]*maxV);
            minV = min(nums[i], nums[i]*minV);

            retVal = max(retVal, maxV);
        }
        return retVal;
    }
};