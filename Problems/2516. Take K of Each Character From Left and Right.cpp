class Solution {
public:
    int takeCharacters(string s, int k) {
        int size = s.size();
        //Sliding Window
        if(k == 0) return 0;
        
        int totalA = 0, totalB = 0, totalC = 0;
        int left = 0;
        int right = 0;
        for(char i : s) {
            if(i == 'a') ++totalA;
            else if(i == 'b') ++totalB;
            else if(i == 'c') ++totalC;
        }
        if(totalA < k || totalB < k || totalC < k) {
            return -1;
        }
        int a = 0, b = 0, c = 0;
        int retVal = size;
        while(right < size) {
            if(s[right] == 'a') ++a;
            if(s[right] == 'b') ++b;
            if(s[right] == 'c') ++c;
            ++right;
            while (a > totalA - k || b > totalB - k || c > totalC - k) {
                if(s[left] == 'a') --a;
                if(s[left] == 'b') --b;
                if(s[left] == 'c') --c;
                ++left;
            }

            retVal = min(retVal, (size - (right - left)));
        }

        return retVal;
    }
};