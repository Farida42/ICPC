#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string n;
    long long x,res=0;
    cin>>n>>x;
    for(int i=0;i< n.size();i++)
    {
        res*=10;
        res+=n[i]-'0';
        res%=x;
    }
    if(res== 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
