#include <bits/stdc++.h>
using namespace std;

#define ll long long

//read: 


void sol(){
    int n,k;cin >> n >> k;int i = 0;
    if(n == k && k == 1){
        cout<<"1";
    }
    else if(k < 2 || k > n) cout<<"-1";
    else{
        while(k--){
            cout<<i+1<<" ";
            i++;
        }

        for(int j=0;j<n-i;j++)    cout<<n-j<<" ";
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;cin >> t;
    while(t--){
        sol();
        cout<<endl;
    }

return 0;
}