#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c = 'A';
    char *p, **q;
    p = &c;
    q = &p;
    **q = 'B';
    printf("value of c: %c\n", c);
    printf("value of c: %c\n", *p);
    printf("value of c: %c\n", **q);
}