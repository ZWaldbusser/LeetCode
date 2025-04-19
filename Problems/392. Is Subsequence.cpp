class Solution {
    public:
        bool isSubsequence(string s, string t) {
            int sP = 0;
            int n = s.size();
            int tP = 0;
            int m = t.size();
            
            while (n > sP && m > tP) {
                if(s[sP] == t[tP]) {
                    sP++;
                }
                tP++;
            }
            return sP == n;
        }
    };