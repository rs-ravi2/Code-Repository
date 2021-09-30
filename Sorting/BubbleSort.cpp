#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0;i < n; i++){
        for(int j = 0 ; j < n - i -1; j++){
            if( arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void bubbleSortOptimised(int arr[], int n){
    
    bool swapped;
    for(int i = 0;i < n; i++){
        
        swapped = false;
        for(int j = 0 ; j < n - i -1; j++){
            if( arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        
        if( swapped == false)
        break;
    }
}

int main() {
	int a[] = {2, 6, 7, 4, 9};
	// bubbleSort(a, 4);
    bubbleSortOptimised(a,5);
	for(int i = 0;i < 5; i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}