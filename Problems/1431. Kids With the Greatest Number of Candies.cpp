class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = -1;
        for(int i : candies){
            if (i > max) max = i;
        }
        vector<bool> retval;
        for(int i : candies){
            if (i+extraCandies >= max) retval.push_back(true);
            else retval.push_back(false);
        }
        return retval;
    }
};