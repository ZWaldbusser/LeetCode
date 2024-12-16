class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //Goal: Not naive solution
        //Worstcase complexity: O(n)
        double runningAverage = 0;
        double divisor = double(k);
        if(k == nums.size()) {
            //average array
            for(int i = 0; i < k; ++i) {
                runningAverage += nums[i] / divisor;
            }
            return runningAverage;
        }
        for(int i = 0; i < k; ++i) {
            runningAverage += nums[i] / divisor;
        }
        int valRemove = nums[0];
        double retVal = runningAverage;
        for(int i = k; i < nums.size(); ++i) {
            runningAverage += nums[i] / divisor;
            runningAverage -= nums[i-k] / divisor;
            retVal = max(retVal, runningAverage);
        }

        return retVal;
    }
};