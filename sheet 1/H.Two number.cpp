/**********************************************************
Given 2 numbers A and B. Print floor, ceil and round of A/B

Input:
Only one line containing two numbers A and B (1≤A,B≤10^3)

Output:
Print 3 lines that contain the following in the same order:
"floor A / B = Floor result" without quotes.
"ceil A / B = Ceil result" without quotes.
"round A / B = Round result" without quotes.


Examples::::
input
10 3
output
floor 10 / 3 = 3
ceil 10 / 3 = 4
round 10 / 3 = 3
**********************************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,f,r;
    cin >> a >> b;

    c = ceil((double)a/(double)b);
    f = floor((double)a/(double)b);
    r = round((double)a/(double)b);

    printf("floor %d / %d = %d\n",a,b,f);
    printf("ceil %d / %d = %d\n",a,b,c);
    printf("round %d / %d = %d\n",a,b,r);

    return 0;
}

