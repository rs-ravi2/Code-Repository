#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 3;
    cout << (++i)++;
    return 0;
}

// Pre-increment yields value 4. This is the value which gets printed, thereafter, post-increment yields 5.