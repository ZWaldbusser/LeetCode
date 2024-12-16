class Solution {
public:
    int minimumPushes(string word) {
        vector <int> freq(26);
        for(int i = 0; i < word.size(); i++) {
            freq[int(word.at(i))-'a']++;
        }
        sort(freq.rbegin(), freq.rend());
        int retVal = 0;
        for(int i = 0; i < 26; i++) { 
            retVal += ((i/8+1) * freq[i]);
        }
        return retVal;
    }
};