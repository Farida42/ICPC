#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int l,i,j,count=0;
    cin>>s;
    l=s.size();
    for(j='a';j<='z';j++)
    {
        count=0;
        for(i=0;i<l;i++)
        {
            if(s[i]==j)
            {
                count++;
            }
        }
        if(count>0)
        {
            char c=j;
            cout<<c<<" : "<<count<<endl;
        }
    }
    return 0;

}
