class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int zeroes = 0;
        for(auto i : arr) {
            if(i == 0) {
                ++zeroes;
            }
        }
        for (int i = n - 1; i >= 0; --i) {
            if (i + zeroes < n) {
                arr[i + zeroes] = arr[i];
            }
            if (arr[i] == 0) {
                --zeroes;
                if (i + zeroes < n) {
                    arr[i + zeroes] = 0;
                }
            }
        }
        

    }
};