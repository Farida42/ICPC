/**
Given two strings X and Y . Print the smallest lexicographical one.
Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

Input
Only one line contains two strings X,Y(1≤|X|,|Y|≤20) consists of lowercase English letters.

Output
Print the smallest lexicographical string.

Note: If both of X and Y are equal, print any of them.
**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin >> s >> t ;
    int lens = s.length();
    int lent = t.length();
    int mini=min(lens,lent);
    bool ch = 0;
    for(int i=0; i<mini; i++)
    {
        if(s[i]<t[i])
        {
            cout << s << endl;
            ch = 1;
            break;
        }
        if(s[i]>t[i])
        {
            cout << t << endl;
            ch = 1;
            break;
        }
    }
    if(ch == 0)
    {
        if(lens<=lent)
            cout << s << endl;
        else
            cout << t << endl;
    }

    return 0;
}
