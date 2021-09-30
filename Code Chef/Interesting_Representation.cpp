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

void simpleSieve(int limit, vector<int> &prime){
    vector<bool> mark(limit + 1, true);
 
    for (int p=2; p*p<limit; p++)
    {
        // If p is not changed, then it is a prime
        if (mark[p] == true)
        {
            // Update all multiples of p
            for (int i=p*p; i<limit; i+=p)
                mark[i] = false;
        }
    }
    for (int p=2; p<limit; p++)
    {
        if (mark[p] == true)
        {
            prime.push_back(p);
            cout << p << " ";
        }
    }
}

unordered_set<ll> segmentedSieve(int n)
{
    unordered_set<ll> v;
    int limit = floor(sqrt(n))+1;
    vector<int> prime;
    prime.reserve(limit);
    simpleSieve(limit, prime);
    int low = limit;
    int high = 2*limit;

    while (low < n)
    {
        if (high >= n)
           high = n;
        bool mark[limit+1];
        memset(mark, true, sizeof(mark));

        for (int i = 0; i < prime.size(); i++)
        {
            int loLim = floor(low/prime[i]) * prime[i];
            if (loLim < low)
                loLim += prime[i];
            for (int j=loLim; j<high; j+=prime[i])
                mark[j-low] = false;
        }
        
        // Numbers which are not marked as false are prime
        for (int i = low; i<high; i++)
            if (mark[i - low] == true)
                v.insert(i);
 
        low = low + limit;
        high = high + limit;
    }
    return v;
}

void solve(){
    ll n;cin>>n;

    unordered_set<ll> v1 = segmentedSieve(a);
    unordered_set<ll> v2 = segmentedSieve(b);
    for(auto it:v1) {
        if(v2.find(*it) == v2.end)
        count++;
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