class Solution {
public:
    int findLHS(vector<int>& nums) {
        //Sliding Window
        sort(nums.begin(), nums.end());
        int left = 0;
        int retVal = 0;
        for(int right = 1; right < nums.size(); ++right) {
            //Calculate a window
            while(nums[right] - nums[left] > 1) {
                ++left;
            }
            //Check for valid Harm Seq
            if (nums[right] - nums[left] == 1) {
                //Find the largest size
                retVal = max(retVal, right - left + 1);
            }
        }
        return retVal;
        
    }
};