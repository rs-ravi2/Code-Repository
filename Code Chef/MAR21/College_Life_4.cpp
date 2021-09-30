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


void solve(){
        ll  n, e, h, po, pm, pk;
        cin >> n >> e >> h >> po >> pm >> pk;
        vector<ll > sol;
        vector<ll > kvec;
        for (int i = 0; i <= n + 1; i++) {
            kvec.push_back(i);
        }
        for (ll m = 0; m <= n; m++) {
            ll idx1 = lower_bound(kvec.begin(), kvec.end(), (2 * n - e - 2 * m)) - kvec.begin();
            ll idx2 = upper_bound(kvec.begin(), kvec.end(), (h - 3 * m)) - kvec.begin() - 1;
            if (idx2 < idx1 || idx1 == n + 1)
                continue;
            if (idx2 == n + 1 && (idx2 + 3 * m) > h)
                continue;
            ll k;
            if (pk > po)
                k = (idx1 < (n - m) ? idx1 : (n - m));
            else
                k = (idx2 < (n - m) ? idx2 : (n - m));

            ll o = n - k - m;
            if (k + 2 * m >= 2 * n - e && k + 3 * m <= h) {
                sol.push_back(po * o + pm * m + pk * k);
            }
        }
        if (sol.empty())
            cout << "-1" << endl;
        else {
            ll min = sol[0];
            for (ll i : sol) {
                if (i < min) {
                    min = i;
                }
            }
            cout << min << endl;
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