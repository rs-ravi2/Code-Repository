#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int arri[] = {1, 2 ,3};
    int *ptri = arri;
 
    char arrc[] = {1, 2 ,3};
    char *ptrc = arrc;
 
    cout << "sizeof arri[] = " << sizeof(arri) << " ";
    cout << "sizeof ptri = " << sizeof(ptri) << " ";
 
    cout << "sizeof arrc[] = " << sizeof(arrc) << " ";
    cout << "sizeof ptrc = " << sizeof(ptrc) << " ";
 
    return 0;
}
/*
sizeof returns the whole array size (in bytes). int data-type is of 4-bytes and char is of 1-byte.
 Thus, the integer array yields a total size of 12-bytes, however the character array is of total size 3-bytes.
  Pointer variables on the other hand are all of same-size irrespective of the data-type they point to.
   The reason being pointers are used to store addresses, thus the data-type it points doesn't matter.
 Hence, sizes of both the pointer variables is of 4-bytes.