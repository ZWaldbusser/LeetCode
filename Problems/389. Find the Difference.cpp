class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> map;
        for(char i : s) {
            map[i]++;
        }
        for(char i : t) {
            if(--map[i] < 0) {
                return i;
            }
        }
        return 'a';
    }
};