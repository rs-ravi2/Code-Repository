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

int minOperations(string s) {
    int n = s.length();
    string target = "";
    for(int i = 0; i < n; i++){
        if(i%2 != 0) target += '0';
        else target +=  '1';
    }
    
    int count = 0; bool flag = false;
    for(int i = 0; i < n; i++){
        if(s[i] != target[i]){
            if(!flag)   count++;
            flag = true;
        }
        else
        flag = false;
    }

    // cout<<target<<endl;
    return count;
} 

void solve(string s){
    if(s == "1"){
        cout<<"Uttu"<<endl;
        return;
    }
    else if(s == "0"){
        cout<<"JJ"<<endl;
        return;
    }
    
    bool flag = true;
    for(int i=0;i<s.length();i++){
        if(s[i] != '1') flag = false; 
    }
    if(flag){
        cout<<"Uttu"<<endl;
    }
    int res = minOperations(s);
    // cout<<res<<endl;
    
    if(res&1){
        cout<<"JJ"<<endl;
    }
    else cout<<"Uttu"<<endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;cin >> t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        solve(s);
    }

return 0;
}