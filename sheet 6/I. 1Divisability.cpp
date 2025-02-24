#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long a, b, c, sum2 , sum1 , sum;
    cin>>a>>b>>c;

    if (a > b)
        swap(b, a);
    b/=c;
    a=(a-1)/c;
    sum1=a*(a+1)/2;
    sum2=b*(b+1)/2;
    sum=sum2-sum1;

    cout<<(sum)*c;
}
