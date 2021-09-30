#include <bits/stdc++.h>
using namespace std;

int main()
{
  register int i = 10;
  int *ptr = &i;
  cout << *ptr;
  return 0;
}
/*Theoretically according to the language specifications,
 register int variables are allocated directly on the CPU registers for fast-access.
  Thus, dereferencing it may lead to Compilation Error
   (no storage address on RAM present to which pointer should point to).
    In C compilers error is thrown, however in most C++ compilers,
     register keyword is deprecated and carry no meaning, implying variables allocated
      that way gets default specifier auto. Hence, it may seem to work in C++ compilers.
 However, following language specifications, we stick to Option (C).