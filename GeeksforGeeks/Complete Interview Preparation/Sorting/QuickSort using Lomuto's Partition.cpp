#include <bits/stdc++.h>
using namespace std;

//takes last element of the array, puts that element to the correct postion i.e
// all the elements left to it smaller or equal to the pivot element itself and vice-versa.


// This element is at its correct position where it should be in the sorted array.
// returns the correct index of the pivot element

// Lomuto ensures the position of pivot is fixed at its correct position, then it calls for left and right half
// i.e l to p-1 , since p is fixed.

int iPartition(int arr[], int l, int h)
{   
    int pivot=arr[h]; // last element as pivot always
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

void qSort(int arr[],int l,int h){
    if(l<h){
        int p=iPartition(arr,l,h);
        qSort(arr,l,p-1);
        qSort(arr,p+1,h);
    }
}
 
int main() {
	
    int arr[]={8,4,7,9,3,10,5};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	qSort(arr,0,n-1);
	
	for(int x: arr)
	    cout<<x<<" ";

    return 0;
}