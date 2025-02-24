#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp,a,b,sum=0;
    while (1)
    {
        cin >> a >> b;
        if(a<=0||b<=0)
            break;
        if(a>b)
        {
            for (int i = b; i <= a; i++)
            {
                cout<<i<<" ";
                sum += i;
            }
            cout << "sum =" << sum <<endl;
            sum=0;
        }
        else
        {
            for (int i = a; i <= b; i++)
            {
                cout<<i<<" ";
                sum += i;
            }
            cout << "sum =" << sum <<endl;
            sum=0;
        }
    }
}
