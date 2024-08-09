class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string> retVal;
        unordered_map<string, int> map;
        for(string i : arr) {
            map[i]++;
        }
        for(string i : arr) {
            if(map[i] == 1) {
                retVal.push_back(i);
            }
        }
        if(retVal.size() >= k) {
            return retVal[k-1];
        } else {
            return "";
        }

    }
};