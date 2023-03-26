#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int y;
    int *p;
    p = &x; // 0x62ff08// ai line to comment kore dile address holo//0x62ff54 aita ase
    y = *p;
    *p = 15;
    cout << x << endl;
    cout << p << endl;
    cout << y << endl;
}
