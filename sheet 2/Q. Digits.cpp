#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,rem,i,num,t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        num=0;
        if(n==0)
        {
            printf("%lld\t",n);
        }
        while(n!=0)
        {
            rem=n%10;
            num=(num*10)+rem;
            n=n/10;
            i++;
            printf("%lld\t",rem);
        }
        printf("\n");
    }


}

