#include <bits/stdc++.h>
using namespace std;

int dp[W + 1];
    memset(dp, 0, sizeof(dp));
 
    for (int i = 1; i < n + 1; i++) {
        for (int w = W; w >= 0; w--) {
 
            if (wt[i - 1] <= w)
                // finding the maximum value
                dp[w] = max(dp[w],
                            dp[w - wt[i - 1]] + val[i - 1]);
        }
    }
    return dp[W]; // returning the maximum value of knapsack

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    // int n;cin>>n;int tickets[n+1];

    // for(int i=0; i<n; i++){
    //     cin>>tickets[i];
    // }
    string s = "abacabac";
    int ans = help(s);
    cout << ans << endl;

return 0;
}