#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i,j,a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        a=1;
        for(j=0;j<=i;j++)
        {
           cout<<a<<" ";
			a=a*(i-j)/(j+1);
        }
        cout<<endl;
    }
    return 0;
}
