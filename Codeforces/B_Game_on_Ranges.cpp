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

void helper(int l, int r, map<pair<int, int>, bool>& mp, map<pair<int, int>, int>& res, vector<pair<int,int>>& v) {
    if(l == r){
        res[{l, r}] = l;
        return;
    }
    for (int i = l; i <= r; i++) {
        if (i == l) {
            if (mp[{i + 1, r}]) {
                res[{l, r}] = i;
                helper(i + 1, r, mp, res, v);
                break;
            }
        }else if(i == r){
            if(mp[{l, i - 1}]){
                res[{l, r}] = i;
                helper(l, i - 1, mp, res, v);
                break;
            }
        }else{
            if(mp[{l, i - 1}] && mp[{i + 1, r}]){
                res[{l, r}] = i;
                helper(l, i - 1, mp, res, v);
                helper(i + 1, r, mp, res, v);
                break;
            }
        }
    }
}

void solve(){
    int n;cin >> n;
    map<pair<int, int>, bool> mp;
    map<pair<int, int>, int> res;
    vector<pair<int,int> > v(n);
    int start = 1, end = n;
    for(int i=0; i<n;i++){
        cin >> v[i].first >> v[i].second;
        mp[{v[i].first,v[i].second}] = true;
    }

    helper(start, end, mp, res, v);

    for(auto it:mp){
        if(res[it.first]){
            cout<<it.first.first << " "<<it.first.second << " " << res[it.first] << endl;
        }
    }
    cout<<"\n";
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