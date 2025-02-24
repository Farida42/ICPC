#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long number;
    cin>>number;
    int i,count,c=0;
    for(i=2;i<number/2;i++)
    {
        count=0;
        while(number%i==0)
        {
            count++;
            number/=i;
        }
        if(count>0&&c>0)
            cout<<"*";
        if(count>0)
        {
            cout<<"("<<i<<"^"<<count<<")";
            c=1;
        }
        if(number==1)
            break;

    }
     if(number>01&&c)
     {
           cout<<"*";
     }
     if(number>1)
     {
           cout<<"("<<number<<"^"<<1<<")";
     }
return 0;
}
