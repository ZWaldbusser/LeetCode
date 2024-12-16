class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if(timeSeries.size() == 1) return duration;
        int retVal = 0;
        for(int i = 0; i < timeSeries.size()-1; ++i) {
            retVal += min(timeSeries[i+1] - timeSeries[i], duration);
        }
        return retVal + duration;
    }
};