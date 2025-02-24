#include<bits/stdc++.h>
using namespace std;
int countDistinct(int a[],int n)
{
    int result = 0,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(a[i]==a[j])
                break;
        }
        if(i==j)
            result++;
    }
    return result;
}
int main()
{
    int n,i;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<countDistinct(a,n);
    return 0;
}
