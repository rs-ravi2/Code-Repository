#include <bits/stdc++.h>
using namespace std;
#define ll long long 

#define mod 1000000007


ll tab(ll n, ll a, ll beta){

    ll powVal = 1;
    // n = n % beta;

    if (n == 0) return 0;

    while (a > 0){
        if(a&1) powVal = (powVal*n)%beta;

        a >>= 1;
        n = (n*n)%beta;
    }

    return powVal;
}

void solve(){
    int n;cin>>n;
    ll ans = tab(2,n-1, mod);
    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;cin >> t;
    while(t--){
        solve();cout<<endl;
    }

return 0;
}