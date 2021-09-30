#include <bits/stdc++.h>
using namespace std;

char *fun()
{
    static char arr[1024];
    return arr;
}
 
int main()
{
    char *str = "geeksforgeeks";
    strcpy(fun(), str);
    str = fun();
    strcpy(str, "geeksquiz");
    cout << fun();
    return 0;
}

/* The variable str initially was a string literal. Upon execution of str = fun(), str now points to a static character array,
 finally strcpy copies the "geeksquiz" onto the array pointed to by str.
NOTE: If we didn't assign str to an array (str = fun()), then it would have remained a string literal.
 A string literal (declared as: char *p="literal") is non-modifiable and would cause compilation error at strcpy */