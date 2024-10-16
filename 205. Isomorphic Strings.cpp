class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> forwards;
        unordered_map<char, char> backwards;
        for(int i = 0; i < s.size(); i++) {
            if(forwards.find(s[i]) == forwards.end() && backwards.find(t[i]) == backwards.end()) {
                forwards[s[i]] = t[i];
                backwards[t[i]] = s[i];
            } else if(forwards[s[i]] != t[i] || backwards[t[i]] != s[i]){
                return false;
            }
        }
        return true;
    }
};