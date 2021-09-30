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

void solve(){
    ll n, x, k, o, fg, r;
    	cin >> n >> x;
    	ll a[n];
    	for(ll y = 0; y < n; y++)
        cin >> a[y];
    	
		int i = 0;
    	for(ll g = x; g > 0 && i < n - 1; g--)
    	{
        	fg = 0;
        	ll p = log(a[i]) / log(2);
        	r = pow(2, p);
            a[i] = a[i] ^ r;
        	for(ll j = i + 1; j < n; j++)
			{
            	if((a[j] ^ r) < a[j])
				{
                	a[j]= a[j]^r;
                	fg = 1;
                	break;
            	}
        	}

        	if(fg == 0)
			{
            	a[n - 1] ^= r;
        	}
         
			while(a[i] <= 0)
			{
        		i++; 
        	}
        	o = g + 1;
    	}

		if(o > 0)
		{
        	if(n < 3 && o % 2 >0)
			{
            	a[n - 2] ^= 1;
            	a[n - 1] ^= 1;
        	}
    	}
    	for(ll h = 0; h < n; h++)
		{
			cout << a[h] << " ";
		}
    	cout << endl;
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