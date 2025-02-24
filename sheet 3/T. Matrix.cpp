#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,RightDiagonalSum=0,LeftDiagonalSum=0, i, j;
    cin >> n;
    int a[n][n];
    for( i = 0; i < n; i++)
    {
        for( j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for( i = 0; i < n; i++)
    {
        for( j = 0; j < n; j++)
        {
            if(i==j)
               RightDiagonalSum+=a[i][j];
            if(i+j==(n-1))
                LeftDiagonalSum+=a[i][j];
        }
    }
    printf("%d",abs(RightDiagonalSum-LeftDiagonalSum));
    return 0;
}
