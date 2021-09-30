#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
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


int main()
{
 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 srand(chrono::high_resolution_clock::now().time_since_epoch().count());

 int t;
 cin >> t;

 while (t--) {
     int i,temp,n,k;
     cin>>n>>k;
     vi a;
     fo(i,n){
         cin>>temp;
         a.pb(temp);
     }
     if(a[0] > k){
         cout<<"-1"<<endl;
         continue;
     }
        i=0;
     int count=0,total = k,curr=0;
     bool x=true;
     while(i < n){
         if(a[i] <= total){
            total-=a[i];
            i++;curr++;
         }
         else if(a[i] > k){
             x = false;
             break;
         }
         
         else
         {
            count++;
            total = k;
            curr=1;
         }
     }
     if(!x){
     cout<<"-1"<<"\n";
     continue;
 }
     if(curr)
     count++;

     cout<<count<<"\n";
 }

 return 0;
}