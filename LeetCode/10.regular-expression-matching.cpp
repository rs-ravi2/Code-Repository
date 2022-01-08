/*
 * @lc app=leetcode id=10 lang=cpp
 *
 * [10] Regular Expression Matching
 */

// @lc code=start
static const auto fastIO = []() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
return 0;
}();

class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size(), n = p.size();
        vector<vector<bool>> dp(m+1, vector<bool>(n+1, false));

        dp[0][0] = 1;

        for (int i = 0; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                if(p[j-1] == '*') {
                    dp[i][j] = dp[i][j-2] || (i && dp[i-1][j] && (s[i-1] == p[j-2] || p[j-2] == '.'));
                }
                else{
                    dp[i][j] = i && dp[i-1][j-1] && (s[i-1] == p[j-1] || p[j-1] == '.');
                }
            }
        }

        return dp[m][n];
    }
};
// @lc code=end

