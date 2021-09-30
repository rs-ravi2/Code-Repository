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

// void transpose(int** a,int n){
//     for(int i=1;i<=n;i++){
//         swap(a[n][n-i],a[n-i][n]);
//     }
// }

// int helper(bool** matrix,int** a,int n){
//     int x = 0;
//     for(int i=1;i<n;i++){
//         for(int j=i-1;j>=0;j--){
//             if(a[i][j] != (a[i][i] - (i-j))){
//                 matrix[i][j] = false;
//                 x++;
//             }
//             if(a[j][i] != (a[i][i] - n*(i-j))){
//                 matrix[j][i] = false;
//                 x++;
//             }
//         }
//     }
//     return x;
// }

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;cin >> t;
    while(t--){
        int n;cin>>n;
        int** a = new int* [n+1];
        for(int i=1;i<=n;i++){
            a[i] = new int [n+1];
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }

        int k=n,cnt=0; bool flag = 0;
	    while(k!=0){

		    int i=k,j=1;
		    if(flag) swap(a[i][j], a[j][i]);
		    //cout<<a[i][j]<<" "<<a[j][i]<<endl;
		    if(a[i][j]!= (i-1)*n+j) {
		    	flag = 1-flag;
		    	cnt+=1;
	        }
		    k-=1;
	    }
	    cout<<cnt<<endl;
        // bool** matrix = new bool* [n];
        // fo(i,n){
        //     matrix[i] = new bool [n];
        //     fo(j,n){
        //         matrix[i][j] = true;
        //     }
        // }
        // int x = helper(matrix,a,n);
        // // cout<<x<<endl;

        // // fo(i,n){
        // //     fo(j,n){
        // //         cout<<matrix[i][j]<<" ";
        // //         }
        // //         cout<<endl;
        // //     }
        // // cout<<endl;
        // // while(x != 0){
        //     for(int i=n-1;i>0;i--){
        //         if(!(matrix[i][0] && matrix[0][i])){
        //             transpose(a,i);
        //             k++;    
        //             // x = helper(matrix,a,n);
        //         }
        //     }
        // // }      

        // cout<<k<<endl;

        fo(i,n){
            delete[] a[i];
         }
        delete[] a;
    }
return 0;
}