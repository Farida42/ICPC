#include<bits/stdc++.h>
using namespace std;
void repeat (char c , int n )
{
    int i;
    for (i=0; i<n; i++)
        {
            printf("%c ",c);
        }
         printf("\n");
}
int main()
{
    int t,n;
    char c;
    cin >> t;
    while(t--)
    {
        cin >> n >> c;
        repeat(c, n);
    }
    return 0;
}
