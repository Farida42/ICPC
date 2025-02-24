#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    cin>>s;
    int i=0, len;
    len = strlen(s) - 1;
    bool x=true;
    for (i = 0; i<len; i++)
    {
        if(s[i]!=s[len])
        {
            x=false;
        }
        len--;
    }
    if (x)
        cout  << "YES";
    else
        cout << "NO";
    return 0;
}
