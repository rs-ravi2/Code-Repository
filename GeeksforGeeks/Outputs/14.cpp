#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Assume sizeof character is 1 byte and sizeof integer is 4 bytes
    cout << sizeof(printf("GeeksQuiz"));
    return 0;
}

/*sizeof(printf) returns the size of the return type of printf function, which is an integer, 
thus the value: 4. Any expression however inside sizeof operator never gets evaluated.
 Thus, "GeeksQuiz" never gets printed. 
sizeof determines the final data-type of the enclosed expression without ever evaluating it. */