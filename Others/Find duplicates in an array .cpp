// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans = duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> duplicates(int a[], int n) {
    // code here
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    
    vector<int> ans;int flag = 0;
    for(auto it:m){
        if(it.second > 1){
            flag =1;
            ans.push_back(it.first);
        }        
    }
    
    if(!flag)
    cout<<-1;
    else
    sort(ans.begin(),ans.end());
    return ans;
}
