#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,j,i;
    cin>>t;
    for( j=0; j<t; j++)

    {
        long long int f=1;
        cin>>n;
        for( i=0; i<n; i++)
        {
            f=f*(n-i);
        }
        cout<<f<<endl;
    }
    return 0;
}
