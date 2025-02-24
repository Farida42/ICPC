#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,j,l;
    scanf("%s",a);
    strcpy(b, a);
    strrev(b);
    if(strcmp(a,b) == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}

