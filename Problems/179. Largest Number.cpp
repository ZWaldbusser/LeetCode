class Solution {
public:
    string largestNumber(vector<int>& nums) {
        auto compare = [](const int& a, const int& b) {
            string strA = to_string(a);
            string strB = to_string(b);
            return strA + strB > strB + strA;
        };

        sort(nums.begin(), nums.end(), compare);
        string retVal;
        bool containsNonZer = false;
        for(auto i : nums) {
            if(i != 0) {
                containsNonZer = true;
            }
            retVal.append(to_string(i));
        }
        if(!containsNonZer) {
            return "0";
        }
        return retVal;
    }
};