#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a[100000],low,p;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    low=a[0];
    p=1;
    for(i=1; i<n; i++)
    {
        if(a[i]<low)
        {
            low=a[i];
            p=i+1;
        }
    }
    cout<<low<<" "<<p;

}
