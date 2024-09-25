class Solution {
public:
    int minSteps(int n) {
        //Pasted numbers % n == 0.
        int written = 1;
        int clipboard = 0;
        int retVal = 0;

        while (written != n) {
            if(n % written == 0) {
                clipboard = written;
                retVal++;
            }
            written += clipboard;
            retVal++;
        }
        return retVal;
    }
};