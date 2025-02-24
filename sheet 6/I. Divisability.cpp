#include<bits/stdc++.h>
using namespace std ;
long long sum(long long n)
{
    return n*(n+1)/2;
}
int main ()
{
    long long A, B, C, X, maxi, mini;
    cin >> A >> B >> C ;
    maxi = max(A,B);
    mini = min(A,B);
    X = (sum(maxi/C)*C)-(sum((mini-1)/C)*C);
    cout << X << endl ;

    return 0 ;
}
