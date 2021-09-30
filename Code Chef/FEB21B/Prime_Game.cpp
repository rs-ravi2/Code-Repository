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

const int MAX = 1000005;
int chess[MAX];

void prigame()
{
    // Create a boolean array 
    // "prime[0..n]" and initialize
    // all entries it as true. 
    // A value in prime[i] will
    // finally be false if i is 
    // Not a prime, else true.
    bool prime[MAX + 1]; vi vect;
    memset(prime, true, sizeof(prime));

    for(int i = 2; i * i < MAX; i++)
    {
        // If prime[p] is not changed, 
        // then it is a prime
        if(prime[i] == true)
        {
             // Update all multiples 
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple 
            // of p and are less than p^2 
            // are already been marked.
            for(int j = i * i; j< MAX; j+= i)
            {
                prime[j] = false;
            }
        }
    } 

    for (int p = 2; p < MAX; p++)
        if (prime[p])
            vect.push_back(p);

    auto it = vect.begin();
    int cnt = 0;
    for (int i = 0; i < MAX; i++)
    {
        if(*it <= i)
        {
            ++cnt;
            ++it;
        }
        chess[i] = cnt;
    }
}

void solve(){
    int x, y; cin>>x>>y;
    if(chess[x] <= y)   cout<<("Chef\n");
    else    cout<<("Divyam\n");
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    prigame();
    int t = 1;cin >> t;
    while(t--){
        solve();
        // cout<<endl;
    }

return 0;
}