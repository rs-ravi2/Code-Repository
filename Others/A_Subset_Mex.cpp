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
    while(t--){
        int n,temp=0;cin>>n;
        vi a,b,c;
        fo(i,n){
            cin>>temp;
            a.pb(temp);
        }
        unordered_map<int,int> m;
        fo(i,n){
            m[a[i]]++;
        }
        bool cnt = true;
        tr(it,m){
            if(it->second >= 2){
                b.pb(it->first);
                fo(i,(it->second)){
                    c.pb(it->first);
                }
            }
            else{
                if(!cnt){
                    b.pb(it->first);
                }
                else{
                    c.pb(it->first);
                }
                cnt=!cnt;
            }
        }
        int mex_b,mex_c,i=0;
        while(1){
            auto it = find(b.begin(),b.end(),i);
            if(it != b.end()){
                i++;
            }
            else{
                mex_b = i;
                break;
            }
            if(i == *max_element(b.begin(),b.end())){
                mex_b = i+1;
                break;
            }
        }
        i = 0;
        while(1){
            auto it = find(c.begin(),c.end(),i);
            if(it != c.end()){
                i++;
            }
            else{
                mex_c = i;
                break;
            }
            if(i == *max_element(c.begin(),c.end())){
                mex_c = i+1;
                break;
            }
        }
        for(int i=0,l=b.size();i<l;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        for(int i=0,l=c.size();i<l;i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
        cout<<mex_b + mex_c<<endl;
    }

return 0;
}