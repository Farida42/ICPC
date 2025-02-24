#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n,i;
    double sum=0;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum += log10(i);
    }
    int count=floor(sum)+1;
    cout<<"Number of digits of "<<n<<"! is "<<count;
    return 0;
}
