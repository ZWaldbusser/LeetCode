class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sumVal = 2147483;
        for(int i = 0; i < nums.size() -2; i++) {
            for(int j = i+1; j < nums.size() - 1; j++) {
                for(int k = j+1; k < nums.size(); k++) {
                    int newSum = nums[i] + nums[j] + nums[k];
                    if(abs(sumVal - target) > abs(target-newSum)) {
                        sumVal = newSum;
                    }
                }
            }
        }

        return sumVal;
    }
};