#include<bits/stdc++.h>
using namespace std;
long long a[100008];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;

    for(int i=0;i<n;i++)
     {
       cin>>a[i];
     }
    sort(a,a+n);

    while(q--)
    {
     long long x;
     cin>>x;
     if(binary_search(a,a+n,x))
       cout<<"found"<<endl;
     else
       cout<<"not found"<<endl;
     }
return 0;
}
