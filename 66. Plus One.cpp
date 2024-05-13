vclass Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //Recursive Implementation
        
        if(digits.size() == 0) {
            digits.push_back(1);
            return digits;
        }
        int back = digits.back();
        digits.pop_back();
        if(back == 9) {
            plusOne(digits);
            digits.push_back(0);
            return digits;
        } else {
            digits.push_back(back+1);
        }
        return digits;
    }
};