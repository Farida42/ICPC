#include<stdio.h>
#include<string.h>

int main()
{
    int a,c=0,l,m=0,b,i;
    char t[1000];
    scanf("%d%d",&a,&b);
    scanf("\n%s",t);
    l=strlen(t);
    if(l==(a+b+1))
    {
        for(i=0; i<l; i++)
        {
            if(t[i]>='0' &&t[i]<='9')
            {
                c++;
            }
            if(i==a && t[i]=='-')
            {
                m=1;
            }
        }
        if(c==(a+b) && m==1)
            printf("Yes");
        else
            printf("No");
    }
    else
    {
        printf("No");
    }
}
