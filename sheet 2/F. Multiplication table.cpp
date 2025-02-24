#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, i=1;
    cin >> a ;
    do
    {
        printf("%d * %d = %d\n", a, i, a*i);
        i++;
    }
    while(i <= 12);
    return 0;
}


