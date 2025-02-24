#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define ll long long
int main()
{
    fast;
    ll n,Sum,i,s=0;
    cin>>n;
	vector<int>a(n);
    for(i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    for(i = 1; i <= n; i++)
    {
        s+=a[i];
    }

    Sum=abs(s);
    cout<<Sum<<endl;

	return 0;
}




