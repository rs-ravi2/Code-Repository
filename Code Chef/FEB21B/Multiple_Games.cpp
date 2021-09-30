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

struct hash_pair
{
    size_t operator()(const pii &p) const
    {
        auto hash1 = hash<int>{}(p.F);
        auto hash2 = hash<int>{}(p.S);
        return hash<size_t>{}(hash1 + hash2);
    }
};

void solve(){
    int n, q, m;cin>>n>>q>>m;

    vi arr(n);
    for(auto &a :arr){
        cin>>a;
    }

    int freq[1000001] = {0};
    int res[m + 1] = {0};

    unordered_map<pii, int, hash_pair> map;
    while (q--){
        int l, r;cin>>l>>r;
        l--, r--;

        if (arr[l] > m)
            continue;

        if (arr[r] <= m)
            map[{arr[l], arr[r]}]++;

        freq[arr[l]]++, freq[m + 1]--;
    }

    for (auto i : map){
        int ff = i.F.F, fs = i.F.S, s = i.S;

        freq[fs + ff] -= s, freq[fs + 2 * ff] += s;

        int x = fs + 2 * ff;
        while (x + fs <= m)    {
            x += fs;
            freq[x] -= s, freq[x + ff] += s;
            x += ff;
        }
    }

    for(int i=1;i< m + 1;i++) freq[i] += freq[i - 1];

    cout<<*max_element(freq, freq + m + 1)<<endl;
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