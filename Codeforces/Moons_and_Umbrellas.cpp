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

void read(){
    
}

void solve(){
    int n,x,y,count=0,ans=0;
    string s;
    cin>>x>>y>>s;
    int i,j;
    n=s.length();
    for(i=0;i<n;i++)
    {
        if(s[i]=='?')
            count++;
    }
    if(count==n || count==n-1)
    {
        cout<<"0";
        return;
    }
    int k;
    for(k=0;k<n-1;k++)
    {
        if(s[k]!='?')
            break;
    }
    if(k==0)
        k++;
    i=k;
    while(i<n-1)
    {
        if(s[i]=='?')
        {
            if(s[i-1]!=s[i+1] && s[i+1]!='?')
            {
                if(s[i-1]=='J')
                    ans+=y;
                else
                    ans+=x;
            }
            else if(s[i-1]!=s[i+1] && s[i+1]=='?')
            {
                j=i+2;
                while(s[j]=='?' && j<n)
                {
                    j++;
                }
                if(j==n)
                {
                    break;
                }
                if(s[i-1]!=s[j])
                {
                    if(s[i-1]=='J')
                        ans+=y;
                    else
                        ans+=x;
                }
                i=j;
            }
        }
        i++;
    }
    for(i=0;i<n-1;i++)
    {
        if(s[i]=='J' && s[i+1]=='C')
            ans+=y;
        else if(s[i]=='C' && s[i+1]=='J')
            ans+=x;
    }
    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;cin>>t;
    for(int j=1;j<=t; j++)
    {
        cout<<"Case #"<<j<<": ";
        solve();
        cout<<endl;
    }

return 0;
}