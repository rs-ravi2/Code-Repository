#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    short t,temp;cin >> t;temp=t;
    while(t--){
        short n;cin>>n;
        short* a = new short[n];
        for(short i=0;i<n;i++){
            cin>>a[i];
        }
        int ans = 0;
        for(short i=0;i<n-1;i++){
            short min=128 ,index = -1;
            for(short j = i;j<n;j++){
                if(a[j] < min){
                    min = a[j];
                    index = j;
                }
            }
            reverse(a+i,a+index+1);
            ans += (index-i)+1;
        }
        delete []a;
        cout <<"Case #"<<temp-t<<": "<<ans<<endl;
    }

return 0;
}