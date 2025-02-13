class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> price(n, 0);
        price[0] = cost[0];
        price[1] = cost[1];
        for(int i = 2; i < n; ++i) {
            price[i] = cost[i] + min(price[i-1],price[i-2]);
        }
        return min(price[n-1],price[n-2]);

    }
};