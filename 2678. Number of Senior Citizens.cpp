class Solution {
public:
    int countSeniors(vector<string>& details) {
        int retVal = 0;
        for(int i = 0; i < details.size(); i++) {
            int tens = int(details[i][details[i].size()-4]) - 48;
            int ones = int(details[i][details[i].size()-3]) - 48;
            (!(tens == 6 && ones == 0) && tens >= 6) ? retVal++ : retVal += 0;
        }
        return retVal;
    }
};