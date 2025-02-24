#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int N,Y,M,D;
    cin >> N;

    Y=N/365;
    N=N%365;
    M=N/30;
    D=N%30;

    cout<<Y<<" years"<<"\n"<<M<<" months"<<"\n"<<D<<" days";

    return 0;
}
