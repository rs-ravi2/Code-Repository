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


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;cin >> t;

    while (t--) {
        int n;cin>>n;
        vi a,b;int temp=0;
        for(int i=1;i<=n;i++){
            cin>>temp;
            a.pb(temp);
        }
        int sum_even=0,sum_odd=0,diff=0,one=0,zero=0;
        for(int i=0;i<n;i++){
            if(i%2 == 0){
                sum_even+=a[i];
            }
            else{
                sum_odd+=a[i];
            }
        }
        if(abs(sum_even - sum_odd) == 0){
            cout<<n<<"\n";
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
        }
        else if(sum_even > sum_odd){
            diff = sum_even - sum_odd;
            if(sum_odd == 0){
                for(int i=0;i<n;i+=2){
                    b.pb(a[i]);
                }
                cout<<n/2<<endl;
                for(int i=0,l=b.size();i<l;i++){
                    cout<<b[i]<<" ";                    
                }
            }
            else{
                diff*=2;
                for(int i=0;i<n;i++){
                    if(i%2 != 0){
                        if(a[i] ==0)
                        zero++;
                        else
                        one++;
                    }
                }
                for(int i=0;i<n;i++){
                    if(diff > 0){
                    if(zero >= n-diff){
                        zero--;
                        continue;
                    }
                    else if(one >= n-diff){
                        one--;
                        continue;
                    }
                    else{
                        b.pb(a[i]);
                    }
                    if(one == n-diff && zero == n-diff)
                    diff--;
                    }
                    else if(diff == 0)
                    b.push_back(a[i]);
                }
                cout<<n - diff<<"\n";
                for(int i=0,l=b.size();i<l;i++){
                    cout<<b[i]<<" ";                    
                }
            }
        }
        else if(sum_even < sum_odd){
            diff = sum_odd - sum_even;
            // cout<<"DIFF : "<<diff<<endl;
            if(sum_even == 0){
                for(int i=1;i<n;i+=2){
                    b.pb(a[i]);
                }
                cout<<n/2<<"\n";
                for(int i=0,l=b.size();i<l;i++){
                    cout<<b[i]<<" ";                    
                }
            }
            else{
            for(int i=0;i<n;i++){
                if(i%2 == 0 && diff > 0){
                    if(a[i] == 0)
                    zero++;
                    else
                    one++;
                    if(one > diff || zero > diff){
                        b.pb(a[i]);
                    }
                    diff--;
                }
                else{
                    b.pb(a[i]);
                }
                cout<<n-diff<<endl;
                for(int i=0,l=b.size();i<l;i++){
                    cout<<b[i]<<" ";
                }
            }
            }
        }
        cout<<"\n";
        // cout<<"FUCKOFF";
    }

return 0;
}