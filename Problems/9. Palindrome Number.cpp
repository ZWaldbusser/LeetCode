class Solution {
public:
    bool isPalindrome(int x) {
        long int origX = x;
        long int revX = 0;
        while (x > 0) {
            long int digit = x % 10;
            revX = revX * 10 + digit;
            x /= 10;
        }
        return origX == revX;

    }    
};