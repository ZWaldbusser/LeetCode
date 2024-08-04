class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        //Return to % 1000000007
        vector<int> arr;
        for(int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = i; j < n; j++) {
                sum += nums[j];
                arr.push_back(sum);
            }
        }
        sort(arr.begin(), arr.end());
        int retVal = 0;
        int val = 1000000007;
        for(int i = left-1; i < right; i++) {
            retVal = (retVal + arr[i]) % val;
        }
        return retVal;


    }
};