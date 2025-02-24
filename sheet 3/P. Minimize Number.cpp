#include<iostream>
using namespace std;
int main()
{
    int n,a[100000];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            cout<<"2";
            break;
        }
        if(a[i]!=n)
        {
            if(a[i]%2!=0)
            {
                cout<<"0";
                break;
            }
        }
    }
    return 0;
}
