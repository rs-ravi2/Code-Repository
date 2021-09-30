#include <bits/stdc++.h>
using namespace std;

// It considers first elements as the pivot and puts all the smaller elements to left and 
// all the greater or equal elements to the right side .

//returns index before which all elments are smaller and after which all elements are greater or equal to pivot.
// i.e returns index of last value of left side

//It doesn't ensures that pivot is at its correct postion, it only ensures that elements on the left side are
// smaller  than or equal to the elements at right side 

// Hence partition is done from l to p.


int partition(int arr[], int l, int h)
{   
    int pivot=arr[l];   // first element as pivot always
    int i=l-1,j=h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)return j;
        swap(arr[i],arr[j]);
    }
}
 
void qSort(int arr[],int l,int h){
    if(l<h){
        int p=partition(arr,l,h);
        qSort(arr,l,p);
        qSort(arr,p+1,h);
    }
}
 
int main() {
	
    int arr[]={8,4,7,9,3,10,5};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	qSort(arr,0,n-1);
	
	for(int x: arr)
	    cout<<x<<" ";
}