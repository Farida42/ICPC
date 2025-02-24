#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ra,ca,rb,cb,i,j,k;
    cin>>ra>>ca;
    int a[ra][ca];
    for(i=0; i<ra; i++)
    {
        for(j=0; j<ca; j++)
        {
            cin>>a[i][j];
        }
    }

    cin>>rb>>cb;
    int b[rb][cb];
    for(i=0; i<rb; i++)
    {
        for(j=0; j<cb; j++)
        {
            cin>>b[i][j];
        }
    }

    int mul[ra][cb];
    for(i=0; i<ra; i++)
    {
        for(j=0; j<cb; j++)
        {
            mul[i][j]=0;
        }
    }

    for(i=0; i<ra; i++)
    {
        for(j=0; j<cb; j++)
        {
            for(k=0; k<ca; k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
//for printing multification
    for(i=0; i<ra; i++)
    {
        for(j=0; j<cb; j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
