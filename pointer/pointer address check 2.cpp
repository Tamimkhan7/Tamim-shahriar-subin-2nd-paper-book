#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10, y = 50;
    int *p, *q;
    p = &x;
    cout << p << endl;
    q = &y;
    cout << q << endl;
    y = *p;
    cout << y << endl;
    *p = 16;
    cout << *p << endl;
    *q = 20;
    cout << *q << endl;
}