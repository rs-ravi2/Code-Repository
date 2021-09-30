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

bool* SieveOfEratosthenes(int n) { 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) { 
        if (prime[p] == true) { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    }
    return prime;
} 

void solve(){
    int n;cin>>n;
    bool* pr = SieveOfEratosthenes(n);
    int** a = new int* [n];
    fo(i,n){
        a[i] = new int [n];
        fo(j,n){
            a[i][j] = 0;
        }
    }

    

    a[n-1][0] = 1; a[0][n-1] = 1;
    fo(i,n){
        fo(j,n){
            if((a[i] == a[0] || a[j] == a[0])&&(a[i][j] != a[0][n-1]) && (a[i][j]!= a[n-1][0])){

            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;cin >> t;
    while(t--){
        solve();
        cout<<"\n";
    }

return 0;
}