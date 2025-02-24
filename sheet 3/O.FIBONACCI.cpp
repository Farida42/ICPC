#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100000],i;
    cin>>n;
    if(n==1)
        cout<<"0";
    else if(n==2)
        cout<<"1";
    else
    {
        for(i=2; i<n; i++)
        {
            a[0]=0;
            a[1]=1;
            a[i] = a[i-1] + a[i-2];
        }
        cout<<a[n-1];
    }

    return 0;
}

