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

void read(){
    
}

void solve(){
    int q,d;cin>>q>>d;vl a;ll temp =0;
    fo(i,q){
        cin>>temp;a.pb(temp);
    }

    unordered_map<int,int> m;
    for(int i=1;i<10;i++){
        int x =d*i;int y=x%10;
        m.insert(mp(y,i));
    }
    m.insert(mp(0,10));
    fo(i,q){
        int x = a[i] % 10;
        auto it = m.find(x);int z = it->second;
        if(a[i] - d*z >= 0){
            cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }
    }

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;cin >> t;
    while(t--){
        read();
        solve();
    }

return 0;
}