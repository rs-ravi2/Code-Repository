#include <iostream>
#include <string.h>
using namespace std;

int coinChangeRec(int coins[],int n,int sum){

    if(sum == 0)   return 1;

    if(n == 0)  return 0;
 
    //not including last item
    int res = coinChangeRec(coins,n-1,sum);
    //if including last item
    if(coins[n-1] <= sum){
        res = res + coinChangeRec(coins,n,sum-coins[n-1]);
    }

    return res;
}

int coinChange(int coins[],int n,int sum){
    int dp[sum+1][n+1];
    memset(dp,sizeof(dp),0);
//  dp[sum+1][n+1] : we are going through all the coins for the given sum 
//  dp[n+1][sum+1] : this will give more values in the result, coz in this for a coin we are going through 
//                   all the sums due to which we add same cases again and again in the result.
//  dp[i][j] : no. of combinations we can get with sum 'i' and coins from i to j;

    for(int i=0;i<=n;i++)
    {
        dp[0][i]=1;
    }
    
    for(int j=0;j<=sum;j++)
    {
        dp[j][0]=0;
    }
    
    for(int i=1;i<=sum;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dp[i][j] = dp[i][j-1];
            
            if(coins[j-1]<=i)
            dp[i][j]+=dp[i-coins[j-1]][j];
        }
    }
    
    return dp[sum][n];
}

int main() {

    int coins[]={1, 2, 3}, sum=4, n=3;

    cout<<getCount(coins, n, sum);      

}