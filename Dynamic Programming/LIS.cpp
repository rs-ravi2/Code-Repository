#include <bits/stdc++.h>
using namespace std;


int LIS( int arr[], int n )  //O(n) : n*n
{  
    int lis[n]; 
    lis[0] = 1;    
  
    for (int i = 1; i < n; i++ )  
    { 
        lis[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( arr[i] > arr[j])  
                lis[i] = max(lis[i], lis[j] + 1);  
    } 
    
    int res = lis[0];
    for(int i=0;i<n;i++)
    {
        res = max(lis[i], res);
    }
    return res;
}  

// #include <iostream>
// #include <string.h>
// using namespace std;

int ceilIdx(int tail[], int l, int r, int key) 
{ 
    while (r > l) {         
        int m = l + (r - l) / 2; 
        if (tail[m] >= key) 
            r = m; 
        else
            l = m+1; 
    } 

    return r; 
} 

int LIS_Efficient(int arr[], int n)  //O(n):nlog(n)
{ 
    int tail[n]; 
    int len =1; 

    tail[0] = arr[0]; 
    
    for (int i = 1; i < n; i++) {
        
        if(arr[i] > tail[len - 1])
        {
            tail[len] = arr[i];
            len++;
        }
        else{
            int c = ceilIdx(tail, 0, len - 1, arr[i]);
            
            tail[c] = arr[i];
        }
    } 

    return len; 
} 

//STL Implementation
int longestSubsequence(int n, int a[])
{
    // your code here
    vector<int> v;
    v.push_back(a[0]);
    for(int i=1; i<n; i++){
        if(a[i] > v.back()){
            v.push_back(a[i]);
        }
        else{
            int min = lower_bound(v.begin(), v.end(), a[i]) - v.begin();
            v[min] = a[i];
        }
    }
    return v.size();
}


int main() {
    int arr[] ={3, 4, 2, 8, 10, 5, 1};
    int n = 7;

    cout<<LIS(arr, n)<<endl;
    cout<<LIS_Efficient(arr,n)<<endl;
    cout<<longestSubsequence(n,arr);
}