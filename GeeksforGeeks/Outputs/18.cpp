#include <bits/stdc++.h>
using namespace std;

int main()
{
   int y = 0;
   int x = (~y == 1);
   cout << x;
   return 0;
}
/*~ is the bitwise-NOT operator. So the value of ~0 would be all 1s (in binary representation) 
which means decimal value of ~0 is not 1.
 Therefore the result of comparison operator becomes 0.