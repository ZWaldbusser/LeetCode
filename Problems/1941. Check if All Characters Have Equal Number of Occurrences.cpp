class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> m;
        int n = s.length();
        for(int i = 0; i < n; ++i) {
            char c = s[i];
            m[c]++;
        }
        int retVal= m.begin()->second;
        for(auto key: m) {
            if(key.second != retVal) {
                return false;
            }
        }
        return true;
    }
};