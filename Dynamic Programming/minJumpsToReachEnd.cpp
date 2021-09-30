#include <bits/stdc++.h>
using namespace std;

int minJumpsRec(int arr[],int n){

    if(n == 1)  return 0;

    int res = INT_MAX;
    for(int i=0;i<n-1;i++){
        if(i+arr[i] >= n-1){
            int sub_res = minJumpsRec(arr,i+1);
            if(sub_res != INT_MAX)
                res = min(res,sub_res+1);
        }
    }
    return res;
}
       
int minJumps(int arr[], int n) 
{ 
    
    int dp[n]; 
    int i, j; 
    
    dp[0] = 0; 
    
    for (i = 1; i < n; i++) { 
        dp[i] = INT_MAX; 
        for (j = 0; j < i; j++) { 
            if (i <= j + arr[j] && dp[j] != INT_MAX) { 
                dp[i] = min(dp[i], dp[j] + 1); 
                break; 
            } 
        } 
    } 
    return dp[n - 1]; 
} 

int main() {
    int arr[] = {3, 4, 2, 1, 2, 1}, n =6;
    cout<<minJumps(arr,n)<<endl;
    cout<<minJumpsRec(arr,n);

    return 0;
}
