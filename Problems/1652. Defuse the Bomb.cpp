class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> retVal(n, 0);
        //Base
        if (k == 0) return retVal;

        //Sliding Window
        if (k > 0) {
            // Positive k: Sum of next k elements
            int window = accumulate(code.begin() + 1, code.begin() + k + 1, 0);
            retVal[0] = window;
            for (int i = 1; i < n; ++i) {
                window -= code[i] - code[(i + k) % n];
                retVal[i] = window;
            }
        } else {
            // Negative k: Sum of previous -k elements
            k = -k;
            int window = accumulate(code.end() - k, code.end(), 0);
            retVal[0] = window;
            for (int i = 0; i < n - 1; ++i) {
                window -= code[(i + n - k) % n] - code[i];
                retVal[i + 1] = window;
            }
        }
        return retVal;
    }
};
