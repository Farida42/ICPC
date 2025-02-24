#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int A,B,C,D;
    cin >> A >> B >> C >> D;

    if((B * log(A)) > (D * log(C)))
        printf("YES\n");
    else
        printf("NO\n");

 return 0;
}

