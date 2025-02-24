#include <bits/stdc++.h>
using namespace std;
int main ()
{
    char X[50],Y[50];
    int a;
    cin >> X >> Y;
    a = strcmp(X,Y);
    if(a==-1)
    {
        cout << X << endl;
    }
    else
        cout << Y << endl;
    return 0;
}
