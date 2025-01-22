class Solution {
public:
    int heightChecker(vector<int>& heights) {
        // O(nlog(n)) time complexity. Not most efficient.
        vector<int> sorted = heights;
        std::sort(sorted.begin(), sorted.end());
        int retVal = 0;
        for(int i = 0; i < heights.size(); ++i) {
            if(heights[i] != sorted[i]) {
                //Doesn't match the expected direction
                ++retVal;
                    
            }
        }
        return retVal;
    }
};