#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    // Assume base address of arr is 2000 and size of integer is 32 bit
    printf("%u %u", arr + 1, &arr + 1);
 
    return 0;
} 
/*Explanation
Name of array in C gives the address(except in sizeof operator) of the first element.
 Adding 1 to this address gives the address plus the sizeof(type) the array has.
  Applying the Address-of operator before the array name gives the address of the whole array.
 Adding 1 to this address gives the address plus the sizeof whole array.