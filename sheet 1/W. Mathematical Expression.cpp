#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    char s,q;
    scanf("%lld %c %lld %c %lld ",&a,&s,&b,&q,&c);
    if((s == '+' && a+b==c) || (s == '-' && a-b==c) || (s == '*' && a*b==c) )
    {
        printf("Yes");
    }
    else
    {
        if(s=='+')
        {
            printf("%lld",a+b);
        }
        else if(s=='-')
        {
            printf("%lld",a-b);
        }
        else if(s=='*')
        {
            printf("%lld",a*b);
        }
    }
    return 0;
}
