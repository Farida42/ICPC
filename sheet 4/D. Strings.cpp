/**
Given two strings A and B. Print three lines contain the following:
The size of the string A and size of the string B separated by a space
The string produced by concatenating A and B (A+B).
The two strings separated by a single space respectively, after swapping their first character.
For more clarification see the example below.

Input
The first line contains a string A (1≤|A|≤10) where |A| is the length of A.

The second line contains a string B (1≤|B|≤10) where |B| is the length of B.

Output
Print the answer required above.
**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t ;
    int len = s.length();
    cout<<len;
    cout<<" ";
    cout<<t.length()<<"\n";
    cout<<s+t<<endl;
    char temp ;
    temp = s[0];
    s[0] = t[0];
    t[0] = temp;
    cout << s << " " << t << endl;
    return 0;
}
