#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,c=0;
    string s;
    cin >> a >> b;
    cin >> s;
    int d = a+b;
    for(i=0; i<=d; i++)
    {
        if(s[a]!='-')
            c=1;
        break;
    }
    if(s[i]>='0' &&s[i]<='9')
    {
        c=1;
    }
    if (c == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
