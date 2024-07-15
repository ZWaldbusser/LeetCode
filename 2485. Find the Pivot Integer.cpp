class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1) {
            return 1;
        }
        int lSum = 0;
        int rSum = 0;
        int lInd = 1;
        int rInd = n;
        while(rInd >= lInd){
            std::cout << lSum << " " << rSum << std::endl;
            if(lSum > rSum) {
                rSum += rInd;
                rInd--;
            } else {
                lSum += lInd;
                lInd++;
            }
        }
        std::cout << lSum << " " << rSum << std::endl;
        if(lSum == rSum+rInd) {
            return rInd;
        }
        return -1;
    }
};