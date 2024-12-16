class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int left = 1; //Min amount of items at a store
        int right = quantities[0]; //Max
        for(int i = 0; i < quantities.size(); ++i) {
            right = max(right, quantities[i]);
        }
         
        //Binary Search
        while(!(left >= right)) {
            int temp = 0;
            int mid = (left + right) / 2;
            for(int i = 0; i < quantities.size(); ++i) {       
                temp += (quantities[i] + mid - 1) / mid;
            }
            if (n >= temp) {
                right = mid;

            } else {
                left = mid+1;
            }
        }

        return left;
    }
};