 #include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[1009],c,min,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min = a[0];
    for(i=0;i<n;i++)
    {
        if( min>a[i])
        {
            min=a[i];
        }
    }
    c = 0 ;
    for(i=0;i<n;i++)
    {
        if( min==a[i])
        {
            c++;
        }
    }

    if (c%2==0 )
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }
    return 0;
}

