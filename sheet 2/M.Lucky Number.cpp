#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,temp=0,divide,n,sum=0;
    cin >> a >> b;
    bool c=true;
    for(n=a; n<=b; n++)
    {
        divide = n;
        sum = n;
        while(divide>0)
        {
            temp=divide%10;
            divide/=10;
            if(temp==7||temp==4)
            {
                if(divide==0)
                {
                    cout<<sum<<" ";
                    c=false;
                }
            }
            else
            {
                break;
            }
        }
    }
    if(c)
    {
        cout<<-1;
    }

    return 0;
}
