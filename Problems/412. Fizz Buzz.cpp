class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> retVal;
        for(int i = 1; i <= n; i++) {
            if(!(i % 3) && !(i % 5)) {
                retVal.push_back("FizzBuzz");
            } else if(!(i % 3)) {
                retVal.push_back("Fizz");
            } else if(!(i % 5)) {
                retVal.push_back("Buzz");
            } else {
                retVal.push_back(to_string(i));
            }
        }
        return retVal;
    }
};