#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

void solve(){
    ll ans=0,n;cin>>n;
    ll v = n/4 , r = n%4;
    ans += v*44;
    switch(r){
        case 0 : if(v>0)ans += 16;
        break;

        case 1 : ans += 20;
        if(v>0) ans += 12;
        break;

        case 2 : ans += 36;
        if(v>0) ans += 8;
        break;

        case 3 : ans += 51;
        if(v>0) ans += 4;
        break;
    }
    cout<<ans<<endl;
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