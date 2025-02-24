#include <iostream>
using namespace std;
int main()
{
    int a[100000],n,m,x;
    cin>>n>>m;
    bool flag=0;
    int index =0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> a[index];
            index++;
        }
    }
    cin >>x;
    for(int i=0; i<index; i++)
    {
        if(x==a[i])
        {
            flag = true;
        }
    }
    if(flag==1)
    {
        cout<<"will not take number";
    }
    else if(flag==0)
    {
        cout<<"will take number";
    }
    return 0;
}
