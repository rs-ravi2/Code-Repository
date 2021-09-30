#include<bits/stdc++.h>
using namespace std;
int main(){
    int *ptr = NULL;
    delete ptr;
    //  cout<<ptr;
    int x =2,n=3;
    x = x | 1 << n;
    cout<<x;
}

// << has higher precedence than |. Hence the expression x | 1 << n becomes x | (1 << n).
//  The expression 1<<n shifts 1 by n places to the left, yielding binary 1 followed by n zeros.
//   e.g. 1<<5 => 100000. Taking OR with x then sets 6th bit of x from the right. (because 0|1 = 1 and 1|1 = 1)
//.e.g. 8 | 1 << 2 = 12, because:
// 8 ~ 1000b 1<<2 ~ 0100b -----------------------
// res: 1100b ~ 12