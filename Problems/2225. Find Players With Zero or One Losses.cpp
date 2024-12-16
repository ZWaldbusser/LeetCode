class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> m;
        unordered_map<int,int> played;
        int maxPlayer = 0;
        for(int i = 0; i < matches.size(); i++) {
            m[matches[i][1]]++;
            played[matches[i][1]]++;
            played[matches[i][0]]++;
            maxPlayer = max(max(maxPlayer, matches[i][0]), matches[i][1]);
        }
        vector<int> temp;
        vector<vector<int>> retVal {temp,temp};
        for(int i = 1; i <= maxPlayer; i++) {
            if(played[i] != 0) {
                if(m[i] == 0 ){
                    retVal[0].push_back(i);
                }else if(m[i] == 1){
                    retVal[1].push_back(i);
                }
            }
            
        }

        return retVal;
    }
};