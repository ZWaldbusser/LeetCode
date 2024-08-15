class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0] != 5) {
            return false;
        }
        unordered_map<int, int> m;
        for(int i = 0; i < bills.size(); i++) {
            int newPurchase = bills[i];
            if(newPurchase == 5) {
                m[5]++;
            } else if(newPurchase == 10) {
                m[10]++;
                if(m[5]-- < 0) {
                    return false;
                }
            } else {
                m[20]++;
                if(m[10] > 0 && m[5] > 0) {
                    m[10]--;
                    m[5]--;
                } else if(m[5] >= 3) {
                    m[5] -= 3;
                } else {
                    return false;
                }
            }

        }

        return true;
    }
};