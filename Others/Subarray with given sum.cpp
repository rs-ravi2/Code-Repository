#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> a;int n,s;cin>>n>>s;
    
    long long int temp,sum=0,add=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
        sum += temp;
    }
    // cout<<sum;
    sort(a.begin(),a.end());
    
    int j=0;
    if(sum > s){
        for(int i=0;i<n;i++){
            if(add == s){
                cout<<j+1<<" "<<i;
                return;
            }
            if(add > s){
                add -= a[j];
                j++;
            }
            if(i < n)
            add += a[i];
        }
    }
    else if(sum == s){
        cout<<1<<" "<<n;
    }
    else
        cout<<-1;
}

int main()
 {
	//code
	int t;cin>>t;
	while(t--){
	    solve();
	    cout<<"\n";
	}
	return 0;
}