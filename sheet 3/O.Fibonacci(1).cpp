#include<bits/stdc++.h>
using namespace std;
long long fib(long long n)
{
    long long a[n+1];
    a[1] = 0;
    a[2] = 1;
    for (int i = 3; i <= n; i++)
        a[i] = a[i-1] + a[i-2];
    return a[n];
}
int main()
{
    long long n;
    cin>>n;
    cout<<fib(n)<<"\n";
    return 0;
}

