class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        //Sliding Window
        long long retVal = 0, temp = 0;
        unordered_map<int, int> m;
        for(int i = 0; i < k; ++i) {
            //Track the number in the subarray
            m[nums[i]]++;
            temp += nums[i];
        }
        //Valid Window (all distinct)
        if(m.size() == k) {
            retVal = temp;
        }
        for(int i=k; i < nums.size(); ++i) {
            --m[nums[i-k]];
            if (m[nums[i-k]] == 0) {
                m.erase(nums[i-k]);
            }
            temp -= nums[i-k];

            ++m[nums[i]];
            temp += nums[i];

            if (m.size() == k) {
                retVal = max(retVal, temp);
            }
        }
        return retVal;
    }
};