#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c1 = 'A', c2 = 'B', c3 = 'C';
    cout << c1 << endl
         << c2 << endl
         << c3 << endl;
    char *p1, *p2, *p3;
    p1 = &c1;
    p2 = &c2;
    p3 = &c3;
    cout << p1 << endl
         << p2 << endl
         << p3 << endl;
    printf("%c %c %c\n", *p1, *p2, *p3);
}