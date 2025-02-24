/**
Given two strings S and T. Print 2 lines that contain the following in the same order:
1.Print the length of S and T separated by space.
2.Print a new string that contains S and T separated by a space.
For more clarification see the example below.

Input
The first line contains a string S (1≤|S|≤10^3) where |S| is the length of S.
The second line contains a string T (1≤|T|≤10^3) where |T| is the length of T.

Output
Print the answer required above.
**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin >> s >> t ;
    cout << s.length()<< " " << t.length()<< "\n";
    cout << s+" "+t;
    return 0;
}
