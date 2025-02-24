#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;
    int n,e=0,g=0,y=0,p=0,t=0,i,size;
    size = s.size ();
    for (i=0;i<size;i++)
    {
        if (s[i] == 'e' || s[i] == 'E')
            e++;
        else if (s[i] == 'g' || s[i] == 'G')
            g++;
        else if (s[i] == 'y' || s[i] == 'Y')
            y++;
        else if (s[i] == 'p' || s[i] == 'P')
            p++;
        else if (s[i] == 't' || s[i] == 'T')
            t++;
    }
    //cout<<e<<endl<<g<<endl<<p<<endl<<y<<endl<<t;
    if(e==g==p==y==t==1)
        cout<<e;
    else if(e<=g<=y<=p<=t)
        cout<<e;
    else if(g<=e<=y<=p<=t)
        cout<<g;
    else if(y<=g<=e<=p<=t)
        cout<<y;
    else if(p<=g<=y<=e<=t)
        cout<<p;
    else
        cout<<t;

return 0;
}
