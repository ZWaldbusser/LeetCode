class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int retVal = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[retVal] != nums[i]) {
                retVal++;
                nums[retVal] = nums[i];
                
            }
        }
        return retVal+1;
    }
};