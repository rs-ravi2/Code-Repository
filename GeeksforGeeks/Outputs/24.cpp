#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[5][5];
    cout<<(((void*)array==*array)&&(*array==array[0]));
    return 0;
}
/*Given is a 2D array array[5][5]. array, *array, array[0] all point to the 1st element of the array.
Thus if Base Address of array is 2000:
array = 2000
*array = 2000
array[0] = 2000
So expression is something like (2000==2000 && 2000==2000) i.e. 1&&1 will return 1.
Please refer to this example for a more clear picture