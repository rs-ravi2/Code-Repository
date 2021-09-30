 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    struct site
    {
        char name[] = "GeeksQuiz";
        int no_of_pages = 200;
    };
 
    struct site *ptr;
    cout << ptr->no_of_pages << " " << ptr->name <<endl;
    return 0;
}
/*When we declare a structure or union, we actually declare a new data type suitable for our purpose.
 So we cannot initialize values as it is not a variable declaration but a data type declaration