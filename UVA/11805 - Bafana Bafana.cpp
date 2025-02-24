#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    fast;
    int t,n,k,p,i,mod;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>k>>p;
        mod=(k+p)%n;
        if(mod==0)
        {
            mod=n;
        }
        cout<<"Case "<<i<<": "<<mod<<endl;
    }

    return 0;
}
