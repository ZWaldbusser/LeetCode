class Solution {
public:
    int timeToInt(string time) {
        int retVal = 0;
        retVal += stoi(time.substr(0, 2))*60;
        retVal += stoi(time.substr(3, 2));
        
        return retVal;
    }
    int findMinDifference(vector<string>& timePoints) {
        int retVal = 1440;
        vector<int> timeMinutes;
        for (string time : timePoints) {
            timeMinutes.push_back(timeToInt(time));
        }
        sort(timeMinutes.begin(), timeMinutes.end());

        for(int i = 0; i < timePoints.size()-1; i++) {
            retVal = min(retVal, abs(timeMinutes[i+1] - timeMinutes[i]));
        }

        retVal = min(retVal, 1440 - (timeMinutes.back() - timeMinutes.front()));
        return retVal;
    }
};