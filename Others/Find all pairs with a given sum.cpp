#include <bits/stdc++.h>
using namespace std;
int main()
 {
	int t;cin>>t;
	while(t--){
	    int n,m,x;cin>>n>>m>>x;
	    int *a =new int [n+1];
	    int *b =new int [m+1];
	    
	    vector <pair<int,int>> v;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	    }
	    
	    unordered_map<int,int> map;
	    for(int i=0;i<n;i++){
	        map[a[i]]++;
	    }
	    int flag = 0,f2 = 0;
	    for(int i=0;i<m;i++){
	        int temp = x-b[i];
	        if(map.find(temp) != map.end()){
	            flag = 1;
	            auto it = map.find(temp);
                int key = it->first;
	            v.push_back(make_pair(key,b[i]));
	        }
	    }
	    
	    if(!flag)
	    cout<<"-1";

	    else{
            sort(v.begin(),v.end());
	        for(auto it:v){
	            if(f2)  cout<<", ";
	            pair<int,int> p = it;
                cout<<p.first<<" "<<p.second;
	            f2++;
	        }
	    }
	    
	    cout<<"\n";
	    
	    delete[] a;
	    delete[] b;
	}
	return 0;
}
