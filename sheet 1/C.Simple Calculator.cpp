#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,sum,mult,sub;
    cin>>x>>y;
    sum = x + y;
    mult = x * y;
    sub = x - y;
    cout << x << " + " << y << " = " << sum << "\n";
    cout << x << " * " << y << " = " << mult << "\n" ;
    cout << x << " - " << y << " = " << sub;

    return 0;
}
