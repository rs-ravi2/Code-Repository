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


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;cin >> t;

    while (t--) {
       int temp,n;cin>>n;
       vi a;
       fo(i,n){
           cin>>temp;
           a.push_back(temp);
       }
       unordered_map<int,int > m;
       fo(i,n){
           m[a[i]]++;
       }
       a.clear();
       int i=0;
       tr(it,m){
           a[i++]=it->S;
       }
       m.clear();
       fo(j,i){
           m[a[j]]++;
       }
       int ans,max=0;
       tr(it,m){
           if(it->S > max){
            ans=it->F;
            max=it->S;
           }
           else if(it->S == max){
               ans=it->F<ans?it->F:ans;
           }
       }
       cout<<ans<<"\n";
    }

return 0;
}