class Solution {
public:
    int minOperations(vector<string>& logs) {
        int retVal = 0;
        for(int i = 0; i < logs.size(); i++) {
            if(logs[i] == "../" && retVal > 0) {
                retVal--;
            } else if(logs[i] != "./" && logs[i] != "../") {
                retVal++;
            }
        }
        return retVal;
    }
};