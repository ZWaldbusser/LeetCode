class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int previous = 0;
        int retVal = 0;
        for(int i = 1; i < colors.size(); i++) {
            //If the colors are different
            if(colors[previous] != colors[i]) {
                previous = i;
            } else {
                if(neededTime[previous] < neededTime[i]) {
                    retVal += neededTime[previous];
                    previous = i;
                } else {
                    retVal += neededTime[i];
                }
            }
        }
        return retVal;
    }
};