
#include <bits/stdc++.h>
using namespace std;

void fun(int *a)
{
    a = (int*)malloc(sizeof(int));
}
  
int main()
{
    int *p;
    fun(p);
    *p = 6;
    cout << *p;
    return 0;
    
}
/*Because of the uncertainty in dereferencing of the variable for invalid memory reference,
 the code produces a runtime error,
i.e. Segmentation fault, in this case.