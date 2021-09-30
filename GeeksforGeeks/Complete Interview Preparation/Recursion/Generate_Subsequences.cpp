#include <bits/stdc++.h>
using namespace std;

void Generate_Subsequences(string s,string curr,int i){
    if(i == s.length()){
        cout<<curr<<" ";
        return;
    }

    Generate_Subsequences(s,curr,i+1);
    Generate_Subsequences(s,curr+s[i],i+1);
}

int main(){
    string s;cin>>s;
    // int length = s.length();
    Generate_Subsequences(s,"",0);
    return 0 ;
}
