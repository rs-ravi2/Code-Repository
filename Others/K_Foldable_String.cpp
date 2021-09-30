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


int main()
{
 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 srand(chrono::high_resolution_clock::now().time_since_epoch().count());

 int t;
 cin >> t;
 while (t--) {
     int n,k;
     cin>>n>>k;
     string s;cin>>s;
     unordered_map<int,int> m;
     fo(i,n){
         m[s[i]-'0']++;
     }
     int x=n/k;
     string temp="",h="0110";
     int f=n/4;
    //  if(n%2 !=0 || k%2!=0){
    //  cout<<"IMPOSSIBLE"<<endl;
    //  continue;
    //  }
     if(m[1] == x && m[0] == x){
         if(n%2 ==0 || k%2 ==0){
           while(f <= n){
           temp+=h;
           f+=4;
           }
         }
         else
         {
             temp[0]='0';
             
             while(f <= n){
           temp+=h;
           f+=4;
           }
           temp[n-1]='1';
         }
         
         cout<<temp<<endl;
     } 
     else
     {
         cout<<"IMPOSSIBLE"<<endl;
     }

 }

 return 0;
}