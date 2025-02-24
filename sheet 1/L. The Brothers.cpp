/***************************************
Given two person names.
Each person has {"the first name" + "the second name"}
Determine whether they are brothers or not.
Note: The two persons are brothers if they share the same second name.

Input
First line will contain two Strings F1, S1 which donates the first and second name of the 1st person.
Second line will contain two Strings F2, S2 which donates the first and second name of the 2nd person.

Output
Print "ARE Brothers" if they are brothers otherwise print "NOT".
***************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char F1[100],S1[100],F2[100],S2[100];
    scanf("%s%s",F1,S1);
    scanf("%s%s",F2,S2);
    if(strcmp(S1,S2)==0)
       cout<<"ARE Brothers";
    else
       cout<<"NOT";
    return 0;
}
