#include<bits/stdc++.h>
using namespace std ;

int main ()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long A, B, Q,MOD ;
    cin >> A >> B >> Q ;
    MOD = Q % 3;
    if ( MOD == 1 )
      cout<< A ;
    else if ( MOD == 2 )
        cout << B ;
    else
        cout << ( A ^ B );

    return 0 ;
}
