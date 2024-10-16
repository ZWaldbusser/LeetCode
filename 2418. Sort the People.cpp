class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        const int num = heights.size();
        vector<pair<int, string>> pairs(num);
        for(int i = 0; i < num; ++i){
            pairs[i] = {heights[i], names[i]};
        }
        sort(pairs.begin(), pairs.end(), greater<>());
        for(int i = 0; i < num; ++i) {
            names[i] = pairs[i].second;
        }
        return names;
    }
};