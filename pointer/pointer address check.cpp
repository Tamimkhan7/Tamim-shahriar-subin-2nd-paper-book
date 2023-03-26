#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10, y;
    int *p, *q;
    p = &x; // x=10
    cout << p << endl;
    y = *p;
    cout << y << endl;
    *p = 15;
    cout << *p << endl;
    *q = 20;
    cout << *q << endl;
}