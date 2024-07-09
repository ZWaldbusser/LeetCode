class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double totalWait = 0;
        double timeTillComp = -1; //When the first order will be ready
        for(int i = 0; i < customers.size(); i++) {
            if (timeTillComp > customers[i][0]) {
                timeTillComp += customers[i][1];
                totalWait += (timeTillComp - customers[i][0]);
            } else {
                timeTillComp = customers[i][0] + customers[i][1];
                totalWait += customers[i][1];
            }
        }

        return totalWait / customers.size();
    }
};