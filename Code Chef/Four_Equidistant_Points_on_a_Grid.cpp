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

//read: 

// ll _pow(ll a, ll b){
//     ll res = 1;
//     while(b > 0){
//         if(b&1){
//             res = (res*a);
//         }
//         a = (a*a);
//         b >>= 1;
//     }
//     return res;
// }

// ll lcm(ll a, ll b){
//     return a/ __gcd(a, b) * b;
// }

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int d = 1;cin >> d;
    if(d&1) cout<< -1;
    else{
        cout<< 0 << " " << (d/2) <<endl;
        cout<< (d/2) << " " << 0 <<endl;
        cout<< 0 << " " << -(d/2) <<endl;
        cout<< (d/2) << " " << 0 <<endl;
    }

return 0;
}