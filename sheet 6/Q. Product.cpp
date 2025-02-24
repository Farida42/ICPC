#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long  l,r,m,maximum,minimum,product;
    cin>>l>>r>>m;
    maximum = max(l,r);
    minimum = min(l,r);
    product = 1;
    for(int i=minimum;i<=maximum;i++)
    {
        product*=i;
        product%=m;
    }
    cout<<product<<endl;

    return 0;
}

