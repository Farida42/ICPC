#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,n1=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
            n1++;
    }

    if(n1==2)
        printf("YES");
    else
        printf("NO");

    return 0;
}
