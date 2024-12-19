class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        pair<int, int> min = make_pair(INT_MAX, -1);
        for(int i = 0; i < k; i++) {
            min.first = INT_MAX;
            for(int j = 0; j < nums.size(); j++) {
                if(nums[j] < min.first) {
                    min.first = nums[j];
                    min.second = j;
                }
            }
            nums[min.second] *= multiplier;
        }


        return nums;
    }
};