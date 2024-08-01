class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int retVal = 0;
        while(tickets[k] != 0) {
            for(int i = 0; i < tickets.size(); i++) {
                if(tickets[i] > 0) {
                    tickets[i]--;
                    retVal++;
                }
                if(tickets[k] == 0) {
                    return retVal;
                }
            }
        }



        return retVal;
    }
};