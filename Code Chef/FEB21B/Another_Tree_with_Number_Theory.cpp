#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define x(x) scanf("%d", &x)
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
const int mod=100005;

vector<int>adj[mod];
vector<int>coun(mod,0);
void dfs(vector<int>graph[],vector<bool>&visited,int vert,int a,int &nd){
    visited[vert]=true;
    int x=coun[vert];
    if(x!=0&&a%x!=0){
       nd+=a;
       return;
    }
    else
       a=x==0?a:(a/x);

    for(auto k:graph[vert]){
        if(!visited[k]){
          dfs(graph,visited,k,a,nd);
        }
    }
}

void solve(){
    int n;cin>>n;

    for(int i=1;i<n;i++){
        int elem;cin>>elem;
        adj[elem].push_back(i+1);
        coun[elem]++;
    }

    int query;cin>>query;

    while(query--){
        vector<bool>visited(n+1,false);
        int nd=0,ver,w;
        cin>>ver>>w;
        dfs(adj,visited,ver,w,nd);
        cout<<nd<<"\n";
    }

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }

return 0;
}