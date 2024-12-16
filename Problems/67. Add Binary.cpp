class Solution {
public:
    string addBinary(string a, string b) {
        string retVal;
        int carryVal = 0;
        int i = a.length()-1;
        int j = b.length()-1;

        while(i >= 0 || j >= 0 || carryVal) {
            int sum = 0;
            if(i >= 0) {
                sum += a[i] - '0';
            }
            if(j >= 0) {
                 sum += b[j] - '0';
            }
            sum += carryVal;
            carryVal = sum / 2;
            
            
            //int to string
            int digit = (sum % 2) + 48;
            retVal += (char) digit;

            i--;
            j--;
        }
        reverse(retVal.begin(), retVal.end());
        return retVal;
    }
};