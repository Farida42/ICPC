#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c=0;
    string s;
    cin >> a >> b;
    cin >> s;
    if(s[a]!='-')
    {
        cout << "No";
        return 0;
    }
    int len = s.length();
    for(int i=0; i<len; i++)
    {
       if((s[i]<'0'||s[i]>'9')&&i!=a)
            c = 1;
    }
    if (c == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
