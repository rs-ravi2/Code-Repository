#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;cin >> t;
    while(t--){
        int n,k;cin>>n>>k;
        int a[n+1],flag = 1,d=n-k;
        fo(i,n){
            a[i] = i+1;
        }
        int i=0;
        while(d--){
            a[i] -= 2*a[i];
            if(flag == 1){
                i +=2; 
            }
            else i-=2;

            if(i==n){
                i = n-1;
                flag = 0;
            }
            else if(i == n+1){
                i = n-2;
                flag = 0;
            }
        }
        fo(i,n){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
return 0;
}