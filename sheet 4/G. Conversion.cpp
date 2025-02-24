#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s) ;
    int i;
    int len = s.length();
    for(i = 0; i<len; i++)
    {
        if(isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
        else if(islower(s[i]))
        {
            s[i] = toupper(s[i]);
        }
        else if(s[i] == ',')
        {
            s[i] = ' ';
        }
    }
    cout << s;
    return 0;
}
