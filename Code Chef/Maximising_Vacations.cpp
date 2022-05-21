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


void solve(){
    int n,x;cin >> n>>x;
    string s;cin >> s;

    int zero = 0; bool flag = true;
    for(int i = 0; i < n; i ++){
        if(s[i] == '0') zero++;
        else if(s[i] == '1'){
            if(zero >= x-1 && flag){
                s[i] = '0';
                flag = false;
            } 
            zero = 0;
        }
    }
    if(flag){
        for(int i=0;i<n;i++){
            if((i!=0 && i!=n-1) && s[i] == '0' || (s[i] == '1' && s[i-1] == '0' && s[i+1] == '0'))  zero++;
            else if(s[i] == '1'){
                if(zero >= x-1 && flag){
                    s[i] = '0';
                    flag = false;
                } 
                zero = 0;
            }
        }
    }
    

    cout<<s<<endl;
    int count = 0;
    zero = 0;

    for(int i=0;i<n;i++){
        if(zero%x == 0 && zero != 0)    count++;
        if(s[i] == '0') zero++;
        else if(s[i] == '1'){
            zero = 0;
        }
    }
    
    cout << count << endl;

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