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

void solve(){
    int n;cin>>n;
    vector<vector<int>> a(n+1);
    int count_one = 0 , count_zero = 0;
    for(int i=1;i<=n;i++){
        a[i] = vector<int> (n+1);
        for(int j=1;j<=n;j++){
            if(i==1 && j==1 || i==n && j==n)
                a[i][j] = -1;
            else{
                cin>>a[i][j];
                if(a[i][j])count_one++;
                else count_zero++;
            }
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j = 1;j<n+1;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    if(a[1][2] == a[2][1]){
        if(a[n-1][n] == a[n][n-1]){
            if(a[1][2] == a[n-1][n]){
                cout<<2<<"\n";
                cout<<n<<" "<<n-1<<"\n";
                cout<<n-1<<" "<<n<<"\n";
            }
            else{
                cout<<0<<"\n";
            }
        }
        else{
            if(a[1][2] == a[n][n-1]){
                cout<<1<<"\n";
                cout<<n<<" "<<n-1<<"\n";
            }
            else{
                cout<<1<<"\n";
                cout<<n-1<<" "<<n<<"\n";
            }
        }
    }
    else{
        if(a[n-1][n] == a[n][n-1]){
            if(a[n-1][n] == a[1][2]){
                cout<<1<<"\n";
                cout<<2<<" "<<1<<"\n";
            }
            else{
                cout<<1<<"\n";
                cout<<1<<" "<<2<<"\n";
            }
        }
        else{
            if(count_one > count_zero){
                if(a[1][2]){
                    cout<<1<<"\n";
                    cout<<1<<" "<<2<<"\n";
                }
                else{
                    cout<<1<<"\n";
                    cout<<2<<" "<<1<<"\n";
                }
            }
            else{
                if(a[1][2]){
                    cout<<1<<"\n";
                    cout<<2<<" "<<1<<"\n";
                }
                else{
                    cout<<1<<"\n";
                    cout<<1<<" "<<2<<"\n";
                }
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
    }

return 0;
}