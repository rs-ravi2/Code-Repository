#include<bits/stdc++.h>
using namespace std;

int getMinVertex(bool* visited,int* weight,int n){

    int minVertex = -1;
    for(int i=0;i<n;i++){
        if(!visited[i] && ((minVertex == -1) || (weight[minVertex] > weight[i]))){
            minVertex = i;
        }
    }
    return minVertex;
}

void prims(int** edges,int n){

    bool* visited = new bool[n]();
    int* parent = new int[n];
    int* weight = new int[n];

    for(int i=0;i<n;i++){
        weight[i] = INT_MAX;
    }
    parent[0] = -1;weight[0] = 0;

    for(int i=0;i<n-1;i++){

        //Get minVertex i.e unvisited vertex with minimum weight
        int minVertex = getMinVertex(visited,weight,n);
        visited[minVertex] = true;

        //Explore all neighbouring vertices of minVertex and update parent and weight array accordingly
        for(int j=0;j<n;j++){
            if(edges[minVertex][j] != 0 && !visited[j]){
                if( weight[j] > edges[minVertex][j]){
                    weight[j] = edges[minVertex][j];
                    parent[j] = minVertex;
                }
            }
        }
    }

    for(int i=1;i<n;i++){
        if(parent[i] < i){
            cout<<parent[i]<<" "<<i<<" "<<weight[i]<<"\n"; 
        }
        else{
            cout<<i<<" "<<parent[i]<<" "<<weight[i]<<"\n";
        }
    }

    delete[] parent;
    delete[] weight;
    delete[] visited;
}

int main(){
    int n,d;cin>>n>>d;
    int **edges = new int*[n];
    for(int i=0;i<n;i++){
        edges[i] = new int[n];
        for(int j=0;j<n;j++){
            edges[i][j] = 0;
        } 
    }
    
    for(int i=0;i<d;i++){
        int f,s,weight;cin>>f>>s>>weight;
        edges[f][s] = weight;
        edges[s][f] = weight;
    }
    cout<<"\n";
    prims(edges,n);

    for(int i=0;i<n;i++)
        delete[] edges[i];
    delete[] edges;
    return 0;
}

// ll diff(vector<long int> x,vector<long int> y){
// 	ll diff=0;
// 	for(long int i=0;i<x.size();i++){
// 		diff+=abs(x[i]-y[i]);
// 	}
// 	return diff;
// }

// long int maxKey(long int key[] ,bool mstSet[] , long int v){
// 	long max=-1;
// 	long index=-1;
// 	for(long int i=0;i<v;i++){
// 		if(mstSet[i]==false && key[i]>max){
// 			max=key[i];
// 			index=i;
// 		}
// 	}return index;
// }

// void MST(vector<vector<ll>> graph,long int v){
// 	//long int v=graph.size();
// 	long int parent[v];
// 	long int key[v];
// 	bool mstSet[v];
// 	for(long int i=0;i<v;i++){
// 		key[i]=-1;
// 		mstSet[i]=false;
// 	}
// 	key[0]=0;
// 	parent[0]=-1;
// 	for(long count=0;count<v-1;count++){
// 		long u=maxKey(key,mstSet,v);
// 		mstSet[u]=true;
// 		for(long j=0;j<v;j++){
// 			if(graph[u][j]!=0 && mstSet[j]==false && graph[u][j]>key[j]){
// 				parent[j]=u;
// 				key[j]=graph[u][j];
// 			}
// 		}
// 	}
// 	ll sum=0;
// 	for(long int i=1;i<v;i++){
// 		sum+=graph[parent[i]][i];
// 	}
// 	cout<<sum<<"\n";
// }

// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());

//     short int d;
// 	long int n,i,j;
// 	cin>>n>>d;
// 	//Edge e=new Edge[n];
// 	vector<vector<long int>> A(n,vector<long int>(d));
// 	for(i=0;i<n;i++){
// 		for(j=0;j<d;j++){
// 			cin>>A[i][j];
// 		}
// 	}
// 	vector<vector<ll>> graph(n, vector <ll>(n,0));
// 	for(i=0;i<n;i++){
// 		for(j=i+1;j<n;j++){
// 			ll weight = -(diff(A[i],A[j]));
// 			graph[i][j]=weight;
// 			graph[j][i]=weight;
// 		}
// 	}
// 	MST(graph,n);
// 	return 0;

// return 0;
// }
