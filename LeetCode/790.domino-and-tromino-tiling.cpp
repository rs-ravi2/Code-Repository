/*
 * @lc app=leetcode id=790 lang=cpp
 *
 * [790] Domino and Tromino Tiling
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
    long long int mod = 1e9+7;
    int numTilings(int n) {
        int dp[n+1][2];
        dp[0][1] = 1, dp[0][0] = 0;
        dp[1][1] = 1, dp[1][0] = 0;

        for(int i=2;i<=n;i++){
            dp[i][1] = ((dp[i-1][1] + dp[i-2][1])%mod + dp[i-1][0]%mod)%mod;
            dp[i][0] = ((dp[i-2][1]*2)%mod + (dp[i-1][0])%mod)%mod;
        }

        return dp[n][1];
    }
};
// @lc code=end

