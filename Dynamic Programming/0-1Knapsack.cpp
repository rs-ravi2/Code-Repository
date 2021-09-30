#include <bits/stdc++.h>
using namespace std;

int knapSackRec(int W,int wt[],int val[],int n){ // O(n) : 2^n
    if(n == 0 || W == 0)  return 0;
    if(wt[n-1] <= W){
        return max(val[n-1] + knapSackRec(W-wt[n-1],wt,val,n-1), knapSackRec(W,wt,val,n-1));
    }
    else
        return knapSackRec(W,wt,val,n-1);
}

int knapSack(int W,int wt[],int val[],int n){ // T(N) : O(n*W)
    int dp[n+1][W+1];
    for(int i=0;i<=W;i++)   dp[0][i] = 0;
    for(int j=0;j<=n;j++)   dp[j][0] = 0;

// dp[i][j] : max value that we can collect for first i items and knapSack capacity j. 

    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            if(wt[i-1] > j)  dp[i][j] = dp[i-1][j];
            else{
                dp[i][j] = max(dp[i-1][j] , val[i-1] + dp[i-1][j-wt[i-1]]);
            }
        }
    }
    return dp[n][W];
}


int main() {
    int val[] = { 10, 40, 30, 50 }; 
    int wt[] = { 5, 4, 6, 3 }; 
    int W = 10; 
    int n = 4;
    cout<<knapSackRec(W, wt, val, n)<<" "<<knapSack(W,wt,val,n);

    return 0;
}