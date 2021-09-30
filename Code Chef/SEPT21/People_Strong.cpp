#include <bits/stdc++.h>
using namespace std;

vector<long long> solve(vector<long long> arr, int length, int A, int B){
    vector<long long> ans(length);
    for(int i=0; i<length; i++){
        if(arr[i] <= 2) ans[i] = 0;
        else{
            long long A_count = arr[i]/A;
            long long B_count = arr[i]/B;

            if(A_count == 0 || B_count == 0)    ans[i] = max(A_count, B_count);
            else{
                ans[i] = A_count*B_count;
            }
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N,A,B;
    cin>>N;
    cin>>A;
    cin>>B;
    vector<long long> arr;
    for(int i=0;i<N;i++){
        long long temp;cin>>temp;
        arr.push_back(temp);
    }

    vector<long long> result;
    result = solve(arr,N,A,B);

    for(int i=0; i<N;i++){
        cout<<result[i]<<"\n";
    }
}