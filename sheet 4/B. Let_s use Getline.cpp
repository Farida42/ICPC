/**
Given a string S. Print the string S from the beginning to the first '\' character without printing the '\'.
Hint: use function getline(cin, s).

Input
Only one line contains a string S (1≤|S|≤10^6) where |S| is the length of the string.
It's guaranteed that S will contain '\' symbol.

Output
Print the answer required above.
**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    getline(cin,s);
    int len = s.length(),i;
    for(i=0;i<len;i++)
    {
        if(s[i]=='\\')
            break;
        cout<<s[i];
    }
    return 0;
}
