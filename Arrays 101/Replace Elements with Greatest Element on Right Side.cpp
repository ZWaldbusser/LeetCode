class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int newVal = -1;
        for(int i = arr.size()-1; i >= 0; --i) {
            int temp = arr[i];
            arr[i] = newVal;
            newVal = max(newVal, temp);
        }
        return arr;
    }
};