#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c,d,m,rem,i=0;
    cin >> a >> b >> c >> d;

    a%=100;
    b%=100;
    c%=100;
    d%=100;

    long long x =(a*b*c*d)%100;

    if(x<10)
        cout << 0;
    cout << x << endl;
    return 0;
}
