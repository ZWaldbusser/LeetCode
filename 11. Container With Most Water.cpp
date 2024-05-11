class Solution {
public:
    int maxArea(vector<int>& height) {
        //Two pointer solution.
        int i = 0;
        int j = height.size()-1;
        int retVal = 0;
        while((j - i) != 0) {
            retVal = max(retVal, (min(height.at(i), height.at(j)) * (j - i)));
            //Maintain the higher of the two values
            if(height.at(i) > height.at(j)) {
                j -= 1;
            } else {
                i += 1;
            }
        }
        return retVal;
    }
};
