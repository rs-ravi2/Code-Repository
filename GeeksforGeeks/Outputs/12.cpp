#include <bits/stdc++.h>
using namespace std;

int main() 
{ 
  int x, y = 5, z = 5; 
  x = y == z; 
  cout << x; 
  return 0; 
}

/*== has a greater precedence than =.
 Thus, the expression x=y==z is evaluated as x=(y==z), leading to true (value 1). *?