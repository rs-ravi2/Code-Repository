#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int n){
    for(int i = 0; i < n-1; i++){
        int min_ind = i;
        
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min_ind]){
                min_ind = j;
            }
        }
        swap(arr[i], arr[min_ind]);
    }
}

int main(){
    int a[] = {2, 6, 7, 4, 9};
    SelectionSort(a, 5);
	for(int i = 0;i < 5; i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}