#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
// #define ll long long
#define ll long long int

#define all(x) x.begin(), x.end()
// #define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;

typedef unsigned long long ull;

#define arr_ip for(int i=0;i<n;i++){cin>>a[i]}
#define arr_op for(int i=0;i<n;i++) {cout<<a[i]}
#define LOOPX   for(ll i=0;i<n;i++){if(max==a[i])max_value++;}
#define SS second
#define loop1 for(ll i=0;i<k;i++){ans=(ans%MOD*(n-i)%MOD)%MOD;ans=div1(ans,i+1);}

#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define MAXLOOP  for(ll i=0;i<n;i++){if(max<a[i])max=a[i];}

ll powerLL(ll x, ll n) 
{ 
    ll result = 1; 
    while (n) { 
        if (n & 1) 
            result = result * x % MOD; 
        n = n / 2; 
        x = x * x % MOD; 
    } 
    return result; 
} 

ll min(ll a,ll b)
{
    return a<b?a:b;

}


ll div1(ll a,ll b)
{
    return (a%MOD *(powerLL(b,MOD-2)%MOD))%MOD;
}


ll sol1(ll n, ll r)
{
    ll ans=1;
    ll k=min(r,n-r);
    
    loop1

    return ans%MOD;
}


void solve()
{
    ll n;
    cin>>n;
    ll a[n],ans;

    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }


    
    ll max=0,max_value=0;
    
    
   MAXLOOP
    
  LOOPX


    if(n==1){
        cout<<2;
        return;}


     if(max_value%2!=0)
        ans=powerLL(2,n)%MOD;

     else
     {
         ans=powerLL(2,n)%MOD-((powerLL(2,n-max_value)%MOD)*sol1(max_value,max_value/2)%MOD)%MOD;

     }

     if(ans<0)
        ans=(ans+MOD)%MOD;

     cout<<ans%MOD;
        
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