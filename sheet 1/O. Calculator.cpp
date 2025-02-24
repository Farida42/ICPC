/***Given a mathematical expression. The expression will be one of the following expressions: A+B, A−B, A∗B and A/B.

Print the result of the mathematical expression.

Input
Only one line contains A,S and B (1≤A,B≤104), S is either (+,−,∗,/).

Output
Print the result of the mathematical expression.***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    int a,b;
    cin >> a >> s >> b;
    switch(s)
    {
    case'+':
        printf("%d",a+b);
        break;
    case'-':
        printf("%d",a-b);
        break;
    case'*':
        printf("%d",a*b);
        break;
    case'/':
        printf("%d",a/b);
        break;
    default:
        printf("Enter no basic operator");
        break;
    }
    return 0;
}
