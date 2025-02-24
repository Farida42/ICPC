#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int a[n+1];
        for( i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        int mini=INT_MAX;
        for( i=1; i<=n; i++)
        {
            for( j=i+1; j<=n; j++)
            {
                int max=a[i]+a[j]+j-i;
                mini=min(mini,(max));

            }
        }
        cout<<mini<<endl;

    }
}


