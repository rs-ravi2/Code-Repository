#include <bits/stdc++.h>
using namespace std;

int fun()
{
  static int num = 16;
  return num--;
}
 
int main()
{
  for(fun(); fun(); fun())
  cout<< fun();
  return 0;
}

/*static variables are not de-allocated upon function return and thus persist the value till the lifetime of the whole program.
 Thus, in the 1st iteration: 16 -> 15 (initialization part of for) -> 14 (condition check).
 Thus cout << fun() prints 14 and decrements afterwards (post-decrement), yielding Option (C).*/