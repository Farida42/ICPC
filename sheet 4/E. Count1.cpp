#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s ;
    int i,sum=0;
    int len = s.length();
    for(i=0; i<len; i++)
    {
        if(s[i] >= 48 && s[i] <= 57)
        {
            sum = sum +( s[i] - '0');
        }
    }
    cout << sum;
    return 0;
}
