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

int findIndex(int a[], int n, int x, int p) {
    int min = 100000000, minp=-1;
    for(int i=0;i<n;i++){
        if(a[i] == x) {
            if(abs(p-i) < min) {
                min = abs(p-i);
                minp = i;
            }
        }
    }
    return minp;
}
void solve() {
    int N, X, p, k;
    cin >> N >> X >> p >> k;
    int a[N];
    for(int i=0;i<N;i++)
    cin >> a[i];
    sort(a, a+N);
    int index = findIndex(a, N, X, p);
    int count = 0;
    if(a[index] != X) {
        a[k-1] = X;
        sort(a, a+N);
        count++;
    }
    if(a[p-1] == X) {
        cout << 0+count;
        return;
    }
    if(p < k && a[p-1] < X) {
        cout << -1;
        return;
    }
    if(p > k && a[p-1] > X) {
        cout << -1;
        return;
    }
    index = findIndex(a, N, X, p)+1;
    cout << abs(p-index)+count;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    

return 0;
}