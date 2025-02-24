/**Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".
For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

Input
Only one line containing a number X (999 < X ≤ 9999)

Output
If the first digit is even print "EVEN" otherwise print "ODD"**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int N,rev=0,rem;
    cin>>N;

    while(N!=0)
    {
        rem=N%10;
        rev=rev*10+rem;
        N/=10;
    }
    if(rev%2 == 0)
        printf("EVEN");
    else
        printf("ODD");

    return 0;
}
