class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        string str = countAndSay(n-1);

        string retVal = "";
        char m = str[0];
        int count = 1;
        //We now have to work and gather every 
        for(int i = 1; i < str.size(); i++) {
            if(str[i] == m) {
                count++;
            } else {
                retVal += to_string(count) + m;
                m = str[i];
                count = 1;
            }

        }
        retVal += to_string(count) + m;
        return retVal;

    }
};