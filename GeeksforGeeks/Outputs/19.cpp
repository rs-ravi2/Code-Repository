#include <bits/stdc++.h>
using namespace std;

int main()
{
  char *s[] = { "knowledge","is","power"};
  char **p;
  p = s;
  cout << ++*p << " ";
  cout << *p++ << " ";
  cout << ++*p << " ";

  return 0;
}

/*Let us consider the expression ++*p in first cout. Since precedence of prefix ++ and
 * is same, associativity comes into picture. *p is evaluated first because both prefix ++ and
  * are right to left associative. When we increment *p by 1,
   it starts pointing to second character of “knowledge”.
    Therefore, the first cout statement prints “nowledge”
    . Let us consider the expression *p++ in second cout .
     Since precedence of postfix ++ is higher than *, p++ is evaluated first.
      And since it’s a psotfix ++, old value of p is used in this expression.
       Therefore, second cout statement prints “nowledge”. In third cout statement,
 the new value of p (updated by second cout) is used, and third cout prints “s”.