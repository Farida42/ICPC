#include <stdio.h>
int main()
{
    int i, j, a, b, c, f = 0, arr[110][110];
    scanf("%d%d", &a, &b);
    for(i=0 ; i<a ; i++)
    {
        for(j=0 ; j<b ; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &c);
    for(i=0 ; i<a ; i++)
    {
        for(j=0 ; j<b ; j++)
        {
            if(arr[i][j]==c)
            {
                f = 1;
            }
        }
    }
    if(f==0)
    {
        printf("will take number\n");
    }
    else
    {
        printf("will not take number\n");
    }
    return 0;
}
