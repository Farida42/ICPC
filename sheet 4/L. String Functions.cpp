#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,qs,ss;
    int n,q,i,p,l,len,r,pos,x;
    cin>>n>>q;
    cin>>s;
    for(i=0;i<=q; i++)
    {
        cin>>qs;
        if(qs=="pop_back")
        {
            s.pop_back();
        }
        else if(qs=="front")
        {
            printf("%c",s[0]);
        }
        else if(qs=="back")
        {
            len = s.length();
            printf("%c",s[len-1]);
        }
        else if(qs=="sort")
        {
            cin>>l>>r;
            sort(s.begin()+l-1,begin()+r);
        }
        else if(qs=="reverse")
        {
            cin>>l>>r;
            reverse(s.begin()+l-1,begin()+r);
        }
        else if(qs=="print")
        {
            cin>>pos;
            printf("%c\n",s[pos-1]);
        }
        else if(qs=="substr")
        {
            cin>>l>>r;
            ss=s.substr(l-1,r);
            cout<<ss<<endl;
        }
        else if(qs=="push_back")
        {
            cin >> x;
            s.push_back(x);
        }
    }
return 0;
}


