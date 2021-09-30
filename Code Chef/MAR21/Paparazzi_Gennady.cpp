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
    
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int, int>> p, st;
        for (int i = 0; i < n; i++) {
            int v;
            cin >> v;
            p.emplace_back(i + 1, v);
        }
        if (n == 2) {
            cout << "1\n";
            continue;
        }
        st.push_back(p[0]);
        st.push_back(p[1]);
        int ans = 1, sz = st.size();
        for (int i = 2; i < n; i++) {
            while (st.size() >= 2) {
                double s1 = ((double) st[sz - 1].second - (double) st[sz - 2].second) /
                            ((double) st[sz - 1].first - (double) st[sz - 2].first);
                double s2 = ((double) p[i].second - (double) st[sz - 1].second) /
                            ((double) p[i].first - (double) st[sz - 1].first);
                if (s1 <= s2) {
                    st.pop_back();
                    sz--;
                } else
                    break;
            }
            st.push_back(p[i]);
            sz++;
            ans = max(ans, st[sz - 1].first - st[sz - 2].first);
        }
        cout << ans << endl;
    }
return 0;
}