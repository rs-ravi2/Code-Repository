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

#define loop1 for(ll i=1;i<=20;i++){cout<<1<<" "<<(1ul<<i)<<endl;cout.flush();cin>>x;xorvalue.push_back(x);};
#define loop2 for(ll i=1;i<xorvalue.size();i++){if(xorvalue[i]>=sum){xorvalue[i]=((n-(xorvalue[i]-sum)/(1ul<<(xorvalue.size()-i)))/2);}else{xorvalue[i]=(n+(sum-xorvalue[i])/(1ul<<(xorvalue.size()-i)))/2;}};


int subtask()
{    ll n,ans=0;
    cin>>n;
    vector<ll>xorvalue;
    ll x;
    loop1

    reverse(xorvalue.begin(),xorvalue.end());
    ll sum=xorvalue[0]-n*(1ul<<20);

    loop2

    for(int i=1;i<xorvalue.size();i++)
    {
        if(xorvalue[i]%2!=0)
        ans+=1ul<<(xorvalue.size()-i);
    }

    if(sum%2!=0)
        ans++;

    cout<<2<<" "<<ans<<endl;
    cout.flush();

    int result;
    cin>>result;

    return result;
     
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;cin >> t;
    while(t--){
        if(!subtask())
        break;
        cout<<endl;
        cout.flush();
    }

return 0;
}