/*********************************************************
Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C (-10^5≤A,B,C≤10^5)

Output
Print the minimum number followed by a single space then print the maximum number.
***********************************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C,max,min;
    cin >> A >> B >> C;
    max = A>B?(A>C?A:C):(B>C?B:C);
    min = A<B?(A<C?A:C):(B<C?B:C);
    printf("%d %d",min,max);
    return 0;
}
