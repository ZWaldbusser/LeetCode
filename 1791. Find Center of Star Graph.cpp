class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        //A center exists, and will exist for any two pieces;
        //A center will ALWAYS exist in the first element;
        return (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]) ? edges[0][0] : edges[0][1];
    }
};