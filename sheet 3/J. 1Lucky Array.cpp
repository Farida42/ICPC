#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a[10000],count = 0, n, i, mini;
    cin>>n;
    for(i = 0; i< n; i++)
    {
        cin>>a[i];
    }
    mini = a[0];
    for(i = 0; i< n; i++)
    {
        if(a[i] < mini)
            mini = a[i];
    }
    for(i = 0; i<n; i++)
    {
        if(a[i] == mini)
            count++;
    }
    if(count % 2 != 0)
        cout<<"Lucky"<<"\n";
    else
        cout<<"Unlucky"<<"\n";
    return 0;
}
