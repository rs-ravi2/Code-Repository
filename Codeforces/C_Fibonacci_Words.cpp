#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    string s;cin>>s;
    int l = s.length();

    map<char,int> temp;

    for(int i=0;i<26;i++){
        temp['A'+i] = i;
    }

    for(int i=2;i<l;i++){
        auto it = temp.find(s[i]);
        int val = it.S;

        auto it1 = temp.find(s[i-1]);
        int val1= it1.S;

        auto it2 = temp.find(s[i-2]);
        int val2= it2.S;

        if(val != (val1 + val2) % 26 )  cout << "NO" <<endl;
        else    cout<<"YES";
    }

return 0;
}