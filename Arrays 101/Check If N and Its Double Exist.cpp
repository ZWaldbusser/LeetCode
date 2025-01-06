class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i = 0; i < arr.size()-1; ++i) {
            for(int j = i+1; j < arr.size(); ++j) {
                if(arr[i] == (2*(arr[j]))) return true;
                else if(arr[i]*2 == arr[j]) return true;
            }
        }
        return false;
    }
};