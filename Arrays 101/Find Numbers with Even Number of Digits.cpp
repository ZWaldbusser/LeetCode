class Solution {
public:
    int digits(int num) {
        int temp = 0;
        while(num >= 1) {
            num /= 10;
            temp++;
        }
        return temp;
    }
    int findNumbers(vector<int>& nums) {
        int retVal = 0;
        for(auto i : nums) {
            if(digits(i) % 2 == 0) {
                retVal++;
            }
        }
        return retVal;
    }
};