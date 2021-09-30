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

pair<pii,int> freespace(vi a,int n){
    pii p;pair<pii,int> P;
    int max1=0,size=0,max2=0,count=0;
    fo(i,n){
        if(a[i] == 0){
            size++;
            count++;
        }
        if(a[i] == 1 || i == n-1){
            if(size !=0 || i== n-1){
                if(size > max1){
                max2=max1;
                max1=size;
                }
            else if(size > max2){
                max2=size;
                }
            size = 0;
            }
        }
    }
    p.F=max1;p.S=max2;
    P=mp(p,count);
    return P;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;cin >> t;
    string y="Yes",no="No";
    for(int x=1;x<=t;++x) {
       int i,temp,n;cin>>n;
       vi a;
       fo(i,n){
           cin>>temp;
           a.pb(temp);
       }
       pair<pii,int> p=freespace(a,n);
    //    cout<<p.F.F<<" "<<p.F.S<<" "<<p.S<<endl;
    
       if(p.F.F != 0 && p.F.S != 0){
           if((int)ceil(p.F.F/2) > p.F.S)
           cout<<y<<"\n";
           else
           cout<<no<<"\n";
       }
       else if(p.F.S == 0 && p.F.F != 0){
           if(p.F.F %2 != 0)
           cout<<y<<"\n";
           else
           cout<<no<<"\n";
       }  
       else if(p.F.S == 0 && p.F.F == 0){
           cout<<no<<"\n";
       }
    //    swap(y,no);
    }

return 0;
}