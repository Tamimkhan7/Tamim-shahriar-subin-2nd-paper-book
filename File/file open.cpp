#include <bits/stdc++.h>
using namespace std;
int main()
{
    FILE *fp;
    char filename[] = "My_file.txt";
    fp = fopen(filename, "w");
    fprintf(fp, "This is a file created by my program: ");
    fprintf(fp, "I am so happy,");
    cout << endl;
    fclose(fp);
}