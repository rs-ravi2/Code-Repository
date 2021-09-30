#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    int y = 20;
    x += y += 10;
    cout << x << " "<< y;
    return 0;
}
/*+= has right-to-left associativity. Hence, the expression x += y += 10 becomes x += (y += 10):
x += (y += 10) sets y = y + 10 ~ y = 30, thereafter
x += 30 ~ x = 40.