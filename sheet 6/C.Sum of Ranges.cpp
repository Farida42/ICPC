#include<bits/stdc++.h>
using namespace std ;
long long sumodd(long long num)
{
    long long res,finalres;
    res=(num+1)/2;
    finalres=res*res;
    return finalres;
}
long long sumeven(long long num)
{
    long long res;
    res=(num*(num+1));
    return res;
}
int main ()
{
    int a, b ;
    cin >> a >> b ;

    int start,end;
    if(a>=b)
    {
        start=b;
        end=a;
    }
    else
    {
        start=a;
        end=b;
    }
    long long evenres=sumeven(end/2)-sumeven((start-1)/2);
    long long oddres=sumodd(end)-sumodd(start-1);

    cout << evenres+oddres << endl ;
    cout << evenres << endl ;
    cout << oddres << endl ;

    return 0 ;
}
