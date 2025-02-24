#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(long long int n)
{
    if(n==0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    long long int n;
    cin >> n;
    isPowerOfTwo(n)? cout<<"YES"<<endl: cout<<"NO"<<endl;
    return 0;
}

