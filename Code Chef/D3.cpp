#include <bits/stdc++.h>
using namespace std;

// #define fo(i, n) for (int i = 0; i < n; i++)
// #define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
// #define ll long long
// #define si(x) scanf("%d", &x)
// #define sl(x) scanf("%lld", &x)
// #define ss(s) scanf("%s", s)
// #define pi(x) printf("%d\n", x)
// #define pl(x) printf("%lld\n", x)
// #define ps(s) printf("%s\n", s)
// #define deb(x) cout << #x << "=" << x << endl
// #define deb2(x, y) cout << #x << "=" << x << ", " << #y << "=" << y << endl
// #define pb push_back
// #define mp make_pair
// #define F first
// #define S second
// #define all(x) x.begin(), x.end()
// #define clr(x) memset(x, 0, sizeof(x))
// #define sortall(x) sort(all(x))
// #define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
// #define PI 3.1415926535897932384626
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pl;
// typedef vector<int> vi;
// typedef vector<ll> vl;
// typedef vector<pii> vpii;
// typedef unsigned long long ull;

// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());

//     int t = 1;cin >> t;
//     while(t--){
//     }

// return 0;
// }

// #include<iostream>
// #include<vector>
// #include<queue>
#define SIZE (ll)(1e6)
#define mod (ll)(1e9+7)
#define va(x) ((x)%mod)
#define vi vector<ll>
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define sc(a) scanf("%d\n",&a);
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
ll parent[SIZE],s[SIZE];
void initial(ll n=SIZE-1){
	for(ll i=0;i<=n;i++){ parent[i] = i, s[i]=1;}
}
ll findroot(ll x){
	return parent[x]==x?x:parent[x]=findroot(parent[x]);
}
void make_union(ll a , ll b){
	if(s[a]<s[b]) swap(a,b);
	parent[b]=a;
	s[a]+= s[b];
}
ll distance(vi a, vi b){
	ll ans=0;
	for(ll i=0;i<a.size();i++) ans+= abs(a[i]-b[i]);
	return ans;
}
void solve(){
	ll n,d,cost=0;cin>>n>>d;
	vector<vi> a(n, vi (d));
	ll dist[n][n];
	for(int i=0;i<n;i++) input(a[i]);
	pqq<vi> q; 
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			dist[i][j] = dist[j][i] = distance(a[i],a[j]);
		}
	}
	initial(n+1);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++) q.push({dist[i][j],i,j});
	}
	while(!q.empty()){
		vi ff = q.top(); q.pop();
		ll x = findroot(ff[1]), y = findroot(ff[2]);
		if(x!=y) 
		{make_union(x,y); cost+= ff[0];}
		else if(s[x]==n) break;
	}
	/*
	q.push({0,0});
	while(!q.empty()){
		ll u = q.top().second,w= q.top().first; q.pop();
	 	if(visited[u]) continue;
		//cout<<u<<endl;
		cost+=w; visited[u]=1;
		for(int i=0;i<n;i++){
			 if(visited[i]==0) q.push({dist[i][u],i});
		}
	}*/
	cout<<cost<<endl;
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}