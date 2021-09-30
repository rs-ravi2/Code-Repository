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

#define MAXN 1000001
 
// Stores smallest prime factor for every number
int spf[MAXN];
 
// Hash to store prime factors count
int hash1[MAXN] = { 0 };
 
// Function to calculate SPF (Smallest Prime Factor)
// for every number till MAXN
void sieve()
{
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)
 
        // Marking smallest prime factor for every
        // number to be itself
        spf[i] = i;
 
    // Separately marking spf for every even
    // number as 2
    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;
 
    // Checking if i is prime
    for (int i = 3; i * i < MAXN; i++) {
 
        // Marking SPF for all numbers divisible by i
        if (spf[i] == i) {
            for (int j = i * i; j < MAXN; j += i)
 
                // Marking spf[j] if it is not
                // previously marked
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}
 
// Function to store the prime factors after dividing
// by the smallest prime factor at every step
void getFactorization(int x)
{
    int temp;
    while (x != 1) {
        temp = spf[x];
        if (x % temp == 0) {
 
            // Storing the count of
            // prime factors in hash
            hash1[spf[x]]++;
            x = x / spf[x];
        }
        while (x % temp == 0)
            x = x / temp;
    }
}
 
// Function that returns true if there are
// no common prime factors between x
// and other numbers of the array
bool check(int x)
{
    int temp;
    while (x != 1) {
        temp = spf[x];
 
        // Checking whether it common
        // prime factor with other numbers
        if (x % temp == 0 && hash1[temp] > 1)
            return false;
        while (x % temp == 0)
            x = x / temp;
    }
    return true;
}
 
// Function that returns true if there is
// an element in the array which is coprime
// with all the other elements of the array
vector<int> hasValidNum(vector<int> arr, int n)
{
 
    // Using sieve for generating prime factors
    sieve();
 
    for (int i = 0; i < n; i++)
        getFactorization(arr[i]);
    

    vi a;
    // Checking the common prime factors
    // with other numbers
    for (int i = 0; i < n; i++)
        if (check(arr[i]))
            a.push_back(arr[i]);
 
    return a;
}

void solve(){
    static int m;
    int n,temp;cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    
    vi ans = hasValidNum(v,n);cout<<ans.size()<<endl;
    if(ans.size() > 0){
        for(auto i:ans) cout<<i<<endl;
    }
    
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    // int t = 1;cin >> t;
    // while(t--){
        // read();
        solve();
    // }

return 0;
}