class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        //Given that you can make any number of sub-arrays, we can always sort if an array has the same values
        unordered_map<int, int> m;
        for(int i = 0; i  < target.size(); i++) {
            m[target[i]]++;
        }
        for(int i = 0; i  < arr.size(); i++) {
            m[arr[i]]--;
            if(m[arr[i]] < 0) {
                return false;
            }
        }
        return true;
    }
};