class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //Bubble sort
        int temp = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                nums[temp] = nums[i];
                temp++;
            }
        }
        for(int i = temp; i < nums.size(); i++) {
            nums[i] = 0;
        }

    }
};