#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c = 'A';
    char *p;
    p = &c;
    printf("Address of c : %p\n", p);
    printf("Address of p : %p\n", &p);
}