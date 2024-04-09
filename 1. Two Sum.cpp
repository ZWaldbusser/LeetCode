class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        for (int i = 0; i != nums.size(); i++){
            for (int j = 0; j != nums.size(); j++){
                if(i != j) {
                    if (nums.at(i)+nums.at(j) == target) {
                        arr = {i, j};
                        return arr;
                    }
                }
            }
        }
        arr = {0, 0};
        return arr;
    }
};