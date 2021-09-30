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
    int n;cin>>n;string s;cin>>s;
    char cw='>',acw='<';int count_cw=0,count_acw=0,err = 0;
    for(int i=0;i<n;i++){
        if(s[i] == cw)
        count_cw++;
        else if(s[i] == acw)
        count_acw++;
    }

    if(count_cw == n || count_acw == n ||  (count_cw*count_acw == 0)){
        cout<<n;
        return;
    }

    int count_off = n - (count_cw+count_acw);
    if(count_off == 0){cout<<count_off;return;}
    else {
        int i = 0;
        while(1){
            if(s[i] == cw){
                for(int j=i+1;j<n;j++){
                    
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
        cout<<"\n";
    }

return 0;
}