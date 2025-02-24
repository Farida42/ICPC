#include <bits/stdc++.h>
int main()
{
    int n, i , j, count=0, unique = 0;
    scanf("%d",&n);
    int arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    return 0;
}
int countdistinct(int arr[],int n)
{
    int  i , j, count=0, unique = 0;
    int newarr[n];
    for(i=0; i<n; i++)
    {
        count = 0;
        for(j=0;j<=i;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            newarr[unique] = arr[i];
            unique++;
        }
    }
    return unique;
}
