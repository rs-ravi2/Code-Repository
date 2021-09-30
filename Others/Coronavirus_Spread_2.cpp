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
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define input(a) {for(int i1=0;i1<n;i1++) cin>>a[i1];}
#define fr(i, x, y) for (ll i = x; i < y; i++)

void in(ll *a, ll n)
{
    for (ll i = 0; i < n; i++)
        cin >> a[i];
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;cin >> t;
    while(t--){
        ll n;
    cin >> n;
    ll a[n];
    in(a, n);
    ll cnt = 0;
    ll maxi = -1;
    ll mini = 10;
    ll time[n][n];
    set<ll> s[5];
    fr(i, 0, n)
    {
        s[i].insert(i);
        fr(j, 0, n)
        {
            if (i == j)
            {
                time[i][j] = 0;
                continue;
            }
            ll x = j - i;
            x *= 60;
            ll y = a[i] - a[j];
            if (y == 0)
            {
                time[i][j] = -INT_MAX;
                continue;
            }
            ll z = (x / y);
            time[i][j] = z;
            if (z >= 0)
            {
                s[i].insert(j);
            }
        }
    }
    fr(i, 0, n)
    {
        //s[i].insert(i + 1);
        fr(j, 0, n)
        {
            if (time[i][j] >= 0)
            {
                //s[i].insert(j + 1);
                for (auto it : s[j])
                {
                    if (time[i][j] <= time[j][it])
                        s[i].insert(it);
                }
            }
        }
    }
    fr(i, 0, n)
    {
        //cout << i + 1 << "-> ";
        mini = min(mini, (ll)s[i].size());
        maxi = max(maxi, (ll)s[i].size());
    }
    //cout << '\n';
    cout << mini << " " << maxi << '\n';
}

return 0;
}