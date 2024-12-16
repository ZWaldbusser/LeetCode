class Solution {
public:
    string decodeMessage(string key, string message) {
        string retVal;
        int cypherVal = 97;
        unordered_map<char, char> m;
        for(int i = 0; i < key.size(); i++) {
            if(key[i] != ' ' && m.find(key[i]) == m.end()) {
                m[key[i]] = char(cypherVal++);
            }
        }
        for(int i = 0; i < message.size(); i++) {
            if(message[i] == ' ') {
                retVal += ' ';
            } else {
                retVal += m[message[i]];
            }
            
        }
        return retVal;
    }
};