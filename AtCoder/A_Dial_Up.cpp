#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << ", " << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef unsigned long long ull;

// void read(){
    
// }

void solve(){
    int n,m,temp;
    cin>>n>>m;
    vi s,t;
    for(int i=0;i<n;i++){
        cin>>temp;
        s.pb(temp);
    }

    for(int i=0;i<m;i++){
        cin>>temp;
        t.pb(temp);
    }
    temp = 0;
    
    if(n == 1){
        cout<<"-1";return;
    }  

    int zero = INT_MAX, one = INT_MAX;
    if(s[0] == 0) zero= 0;
    else one =0;

    for(int i=1;i<n;i++){
        if(zero == INT_MAX && i == 0){
            zero = i;
            break;
        } 
        if(one == INT_MAX && i == 1){
            one = i;
            break;
        }
    }
    int j=0;
    while(j<m){
        if(s[0] == t[0])    temp += (1);
        else    temp += abs()
    }
    
    cout<<temp<<endl;

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    // int t = 1;cin >> t;
    // while(t--){
        // read();
        solve();
    // }

return 0;
}