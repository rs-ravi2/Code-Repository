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

bool isPowerOfTwo(ll n)
{
    return n!=0 && ((n&(n-1))==0);
}

// void solve(){
//     int n;cin>>n;
//     if(!(n&(n-1))){
//         cout<<"-1";
//         return;
//     }
//     else if(n == 1){
//         cout<<"1";
//         return;
//     }
//     set<ll> p;
//     cout<<2<<" "<<3<<" "<<1;
//     p.insert(2);p.insert(3);p.insert(1);
//     for(ll i=4;i<n;i++){
//         if(!(i&(i-1))){
//             cout<<" "<<i+1<<" "<<i;
//             p.insert(i+1);p.insert(i);
//         }
//         else{
//             if(p.find(i) != p.end()){
//                 continue;
//             }
//             else{
//                 cout<<" "<<i;
//             }
//         }
//     }
// }

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;cin >> t;
    while(t--){
         ll n;
        cin >> n;
        set<ll> p;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        else if (isPowerOfTwo(n))
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 2 << " " << 3 << " " << 1;
            p.insert(2);
            p.insert(3);
            p.insert(1);
            for (ll i = 4; i <= n; i++)
            {
                if (isPowerOfTwo(i))
                {
                    cout << " " << i + 1 << " " << i;
                    p.insert(i + 1);
                    p.insert(i);
                }
                else
                {
                    if (p.find(i) != p.end())
                    {
                        continue;
                    }
                    else
                    {
                        cout << " " << i;
                    }
                }
            }
            cout << endl;
        }
    }

return 0;
}