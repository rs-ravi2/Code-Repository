#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;



void solve(){
    ull n;cin>>n;

    if((n - 2) % 4 == 0)   cout<<"Same"<<endl;

    else{
        if(n%2 == 0) cout<<"Even"<<endl;
        else    cout<<"Odd"<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;cin >> t;
    while(t--){
        solve();
    }

return 0;
}