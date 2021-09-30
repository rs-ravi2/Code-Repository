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

#define N 100050
 
int lpf[N], mobius[N];
 
// Function to calculate least
// prime factor of each number
void least_prime_factor()
{
    for (int i = 2; i < N; i++)
 
        // If it is a prime number
        if (!lpf[i])
 
            for (int j = i; j < N; j += i)
 
                // For all multiples which are not
                // visited yet.
                if (!lpf[j])
                    lpf[j] = i;
}
 
// Function to find the value of Mobius function
// for all the numbers from 1 to n
void Mobius()
{
    for (int i = 1; i < N; i++) {
 
        // If number is one
        if (i == 1)
            mobius[i] = 1;
        else {
 
            // If number has a squared prime factor
            if (lpf[i / lpf[i]] == lpf[i])
                mobius[i] = 0;
 
            // Multiply -1 with the previous number
            else
                mobius[i] = -1 * mobius[i / lpf[i]];
        }
    }
}
 
// Function to find the number of pairs
// such that gcd equals to 1
int gcd_pairs(int a[], int n)
{
    // To store maximum number
    int maxi = 0;
 
    // To store frequency of each number
    int fre[N] = { 0 };
 
    // Find frequency and maximum number
    for (int i = 0; i < n; i++) {
        fre[a[i]]++;
        maxi = max(a[i], maxi);
    }
 
    least_prime_factor();
    Mobius();
 
    // To store number of pairs with gcd equals to 1
    int ans = 0;
 
    // Traverse through the all possible elements
    for (int i = 1; i <= maxi; i++) {
        if (!mobius[i])
            continue;
 
        int temp = 0;
        for (int j = i; j <= maxi; j += i)
            temp += fre[j];
 
        ans += temp * (temp - 1) / 2 * mobius[i];
    }
 
    // Return the number of pairs
    return ans;
}

void solve(){
    int n;cin>>n;int arr[n];
    fo(i,n) cin>>arr[i];

    // sort(arr.begin(),arr.end(),greater<int>());

    // for(auto i : arr){
    //     cout<<i<<" ";
    // }cout<<endl;

    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(__gcd(arr[i],(2*arr[j])) > 1)    count++;
    //     }
    // }
    // cout<<count<<endl;
    ll num = pow(2,n) - n;
    cout << num - gcd_pairs(arr, n) << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;cin >> t;
    while(t--){
        solve();
    }

return 0;
}