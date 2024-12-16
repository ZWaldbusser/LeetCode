class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        //Iterate throguh first time, get all non-grumpy minutes
        int retVal = 0;
        for(int i = 0; i < customers.size(); i++) {
            if(!grumpy[i]) {
                retVal += customers[i];
            }
        }

        //Sliding window for fixed grumpy times, find max
        int temp = retVal;
        for(int i = 0; i <= customers.size()-minutes; i++) {
            cout << i << endl;
            int addedVal = 0;
            for(int j = i; j < i+minutes; j++) {
                if(grumpy[j]) {
                    addedVal += customers[j];
                }
            }
            retVal = max(retVal, temp+addedVal);
        }




        return retVal;
    }
};