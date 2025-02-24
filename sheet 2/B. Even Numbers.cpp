#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=2;i<=n;i+=2)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }

    }
    if(n==1)
    {
       cout<<"-1"<<endl;
    }

    return 0;
}
