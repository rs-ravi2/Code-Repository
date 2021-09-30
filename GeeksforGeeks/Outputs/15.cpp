#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a = 10, b = 20, c = 30;
  if (c > b > a)
    printf("TRUE");
  else
    printf("FALSE");
  return 0;
}
/* > has left-to-right associativity. Hence, the expression c>b>a becomes (c>b)>a.
(c>b)>a => (30>20)>10 => 1>10 which is false.
NOTE: (30>20) yields 1, as > is a comparison operator returning a true/false (1/0) value.
*/