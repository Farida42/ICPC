#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n,i,a,x,p,q,sum=0,s;
    cin >> n >> p >> q;
    for(i=1; i<=n; i++)
    {
        s=0;
        a=i;
        while(a>0)
        {
            x=a%10;
            s+=x;
            a/=10;
        }
        if(s>=p && s<=q)
            sum+=i;
    }
    cout << sum;
    return 0;
}
