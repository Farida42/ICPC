#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n,Sum,i,s=0;
    cin>>n;
	int a[n];
    for(i = 0; i < n; i++)
    {
        cin>>a[i];
        s+=a[i];
    }

    Sum=abs(s);
    cout<<Sum;
	return 0;
}



