#include <bits/stdc++.h>
using namespace std;

int Digital_Root (int n){
    int a = n , sum = 0;
    while(a > 0){
        sum += a%10;
        a /= 10;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int a;cin>>a;
    int ans = Digital_Root(a);
    
    while(ans > 9){
        ans = Digital_Root(ans);
    }

    cout<<ans<<endl;

return 0;
}