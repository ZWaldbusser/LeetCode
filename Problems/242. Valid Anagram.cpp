class Solution {
public:
    bool isAnagram(string s, string t) {
        //map solution
        map<char, int> anagram;
        for(char i : s) {
            if(anagram[i])
                ++anagram[i];
            else {
                anagram[i] = 1;
            }
                
        }
        for(char i : t) {
            if(anagram[i]){
               --anagram[i];
               if(anagram[i] == 0) {
                    anagram.erase(i);
               }
            }
            else {
                return false;
            }
        }
        if(!anagram.empty()) return false;
        else return true;
            
    }
};