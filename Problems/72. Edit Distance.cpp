class Solution {
public:
    int helper(int m, int n, string& word1, string& word2, vector<vector<int>>& dp) {
        if(m == 0) return n;
        if(n == 0) return m;
        if (dp[m][n] != -1) return dp[m][n];

        if(word1[m-1] == word2[n-1]) {
            //Ignoring a character
            return dp[m][n] = helper(m-1,n-1,word1,word2,dp);
        }
        return dp[m][n] = 1 + min({
            //Insert
            helper(m, n-1, word1, word2, dp),
            //Replace
            helper(m-1, n-1, word1, word2, dp),
            //Delete
            helper(m-1, n, word1, word2, dp)
        });
    }
    
    int minDistance(string word1, string word2) {
        //Dynamic programming being covered in class.
        int m = word1.size();
        int n = word2.size();
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        return helper(m,n,word1,word2,dp);
    }
};