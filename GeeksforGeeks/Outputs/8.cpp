#include <bits/stdc++.h>
using namespace std;

int main()
{
  extern int i;
  cout << i << " ";
  {
       int i = 10;
       cout << i << " ";
  }
}
// An extern variable is only declared. Hence, no actual memory gets allocated.
// Accessing it in the cout statement before definition is invalid, and thus Compilation Error is thrown.