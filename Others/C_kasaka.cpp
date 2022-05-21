#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    string s;cin>>s;
    int i,j,cnt=0,cnt1=0;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]!='a')break;
        else cnt++;
    }
    for(j=s.size()-1; j>=0; j--)
    {
        if(s[j]!='a')break;
        else cnt1++;
    }
    string ans;
    for(int k=i; k<=j; k++)ans+=s[k];
    string ans1=ans;
    reverse(ans1.begin(),ans1.end());
    if(cnt>cnt1 || ans!=ans1)   cout<<"No"<<endl;
    else cout<<"Yes"<<endl;

return 0;
}