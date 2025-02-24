#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,d;
    cin >> n;
    bool Prime  = true;
    d = sqrt(n);
    for(i = 2; i <= d; i++)
    {
        if(n%i==0)
            Prime = false;
    }
    if( Prime == true && n!=1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
