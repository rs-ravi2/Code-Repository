#include<bits/stdc++.h>
using namespace std;

void Merge(int a[],int b[], int m,int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(a[i] <= b[j]) // = here, represents the stability of the merge function 
            cout<<a[i++]<<" ";
        else
            cout<<b[j++]<<" ";
    }
    while(i<m)
        cout<<a[i++]<<" ";
    while(j<n)
        cout<<b[j++]<<" ";
}

int main(){
    int arr1[] = {10,15,20,40};
    int arr2[] = {5,6,6,10,15};

    int m=sizeof(arr1)/sizeof(arr1[0]);
	int n=sizeof(arr2)/sizeof(arr2[0]);

    Merge(arr1,arr2,m,n);
    return 0;
}