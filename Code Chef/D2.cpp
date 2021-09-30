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

long long int diff(vl x,vl y){
	long long int diff=0;
	for(long int i=0;i<x.size();i++){
		diff+=abs(x[i]-y[i]);
	}
	return diff;
}

long int maxKey(long int key[] ,bool mstSet[] , long int v){
	long max=-1;
	long index=-1;
	for(long int i=0;i<v;i++){
		if(mstSet[i]==false && key[i]>max){
			max=key[i];
			index=i;
		}
	}
    return index;
}
//Prim's Algo : -
void MST(vector <vector<long long int> > graph,long int v){
	long int parent[v];long int key[v];bool mstSet[v];
	for(long int i=0;i<v;i++){
		key[i]=-1;
		mstSet[i]=false;
	}
	key[0]=0;parent[0]=-1;
	for(long count=0;count<v-1;count++){
		long u=maxKey(key,mstSet,v);
		mstSet[u]=true;
		for(long j=0;j<v;j++){
			if(graph[u][j]!=0 && mstSet[j]==false && graph[u][j]>key[j]){
				parent[j]=u;
				key[j]=graph[u][j];
			}
		}
	}
	ll sum=0;
	for(long int i=1;i<v;i++){
		sum+=graph[parent[i]][i];
	}
	cout<<sum<<"\n";
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    short int d;ll n,i,k,j;cin>>n>>d;
	vector<vector<ll>> A(n,vector<ll>(d));
	for(i=0;i<n;i++){
		for(j=0;j<d;j++){
			cin>>A[i][j];
		}
	}
	vector <vector<long long int> > graph(n, vector <long long int>(n,0));
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			long long int weight =diff(A[i],A[j]);
			graph[i][j]=weight;
			graph[j][i]=weight;
		}
	}
	MST(graph,n);
	return 0;

return 0;
}