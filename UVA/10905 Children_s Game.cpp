#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

bool cmp(string a, string b)
{
    string x = a+b;
    string y = b+a;
    return x>y;
}
int main()
{
    fast;
    int n;
    while(cin>>n,n>0)
    {
        vector<string> v(n);
        for (int  i=0; i<n; i++)
            cin >> v[i];
        sort(v.begin(), v.end(), cmp);
        for (int  i=0; i<n; i++)
            cout <<  v[i] ;
    cout<<endl;
    }
    return 0;
}
