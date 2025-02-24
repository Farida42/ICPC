#include <bits/stdc++.h>
using namespace std;
#define ll long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
long int a[2000005],i,n;
int main()
{
    while(scanf("%d",&n))
    {
        if(n==0)
            break;

        for(i=0; i<n; i++)
        {
           cin>>a[i];
        }

        sort(a, a+n);

        for(i=0; i<n; i++)
        {
           cout<<a[i];
            if(i<n-1)
                cout<<" ";
        }
        cout<<endl;

    }

}
