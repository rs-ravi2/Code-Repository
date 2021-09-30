 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << (1 << 2 + 3 << 4);
    return 0;
}

/* + has a higher precedence than <<. Thus the expression 1<<2+3<<4 is evaluated as 1<<(2+3)<<4:
1<<2+3<<4 => 1<<(2+3)<<4 => 1<<5<<4.
<< has left-to-right associativity:
1<<5<<4 => (1<<5)<<4 => 32<<4 => 512. */