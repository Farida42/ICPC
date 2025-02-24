#include<bits/stdc++.h>
using namespace std;

long long __gcd(long long a,long long b)
{
    while(b)
    {
        long long temp;
        temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    long long a,b,gcd,lcm;
    cin>>a>>b;

    gcd=__gcd(a,b);
    lcm=(a/gcd)*b;

    cout<<gcd<<" "<<lcm<<endl;
    return 0;
}
