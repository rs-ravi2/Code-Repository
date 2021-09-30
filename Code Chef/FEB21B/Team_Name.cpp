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
int helper(vector<char>v1,vector<char>v2){
    set<char> s(v1.begin(),v1.end());
    int ans=0;
    for(auto x:v2){
        if(s.find(x)!=s.end()){
            ans++;
        }
    }
    return ans;
}

void solve(){
    int n; cin>>n;
    map<string,vector<char> >m;
    
    for(int i=0;i<n;i++){
        string s;cin>>s;
        if(s.length()>0){
            m[s.substr(1)].push_back(s[0]);
                
        }
            
    }
    ll ans=0;
    for(auto i : m){
        for(auto j : m){
            if(i.F!=j.F){
                int c=helper(i.S,j.S);
                ans+=(i.S.size()-c)*(j.S.size()-c);
            }
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;cin >> t;
    while(t--){
        // read();
        solve();
    }

return 0;
}