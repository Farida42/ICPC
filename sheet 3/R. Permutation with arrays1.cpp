#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,sum1=0,sum2=0;
    cin>>n;
    int ar[n];
    int ar1[n];
    for(i=0; i<n; i++)
    {
        cin>>ar[i];

    }
    for(i=0; i<n; i++)
    {
        sum1 += ar[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>ar1[i];

    }
    for(i=0; i<n; i++)
    {
        sum2 += ar1[i];
    }
    if(sum1==sum2)
    {
        cout<<"yes";
    }

    else
    {
        cout<<"no";
    }

    return 0;
}







