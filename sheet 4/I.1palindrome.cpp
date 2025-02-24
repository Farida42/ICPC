#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    int i,length;
    cin>>s;
    bool flag=true;
    length = s.length()-1;
    for(i=0; i < length ; i++)
    {
        if(s[i] != s[length-i])
        {
            flag = false;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
