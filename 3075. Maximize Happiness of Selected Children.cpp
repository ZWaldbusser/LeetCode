class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
       //sort the vector
        sort(begin(happiness), end(happiness), greater<int>());

       //For every k, decrement the value by i (if valid), then add it to the sum
       int i = 0;
       long long retVal = 0;
       while(k > 0) {
            int newVal = max(0, happiness[i] - i);
            happiness[i] = newVal;
            retVal += happiness[i];
            i++;
            k--;
       }
        return retVal;
    }
};