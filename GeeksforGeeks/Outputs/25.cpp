#include <bits/stdc++.h>
using namespace std;

int main()
{
 int var;  /*Suppose address of var is 2000 */
 
 void *ptr = &var;
 *ptr = 5;
 cout << var << " " << *ptr;
}
/*Key point in the above snippet is de-referencing of void pointer.
 It should be noted that de-referencing of void pointer isn’t allowed because void is an incomplete data type.
  The correct way to assign value of 5 would be first to typecast void pointer and then use it.
 So instead of *ptr, one should use *(int *)ptr.