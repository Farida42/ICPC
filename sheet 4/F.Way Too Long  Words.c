#include<stdio.h>
#include<string.h>
int main()
{
    int test, i, len;
    scanf("%d",&test);
    //getchar();
    for(i=0; i<test; i++)
    {
        char s[101];
        fgets(s, 101, stdin);
        len = strlen(s);
        if(len<=10)
            printf("%c",s);
        else
        {
            printf("%c",s[0]);
            printf("%d",len-2);
            printf("%c",s[len-1]);
        }
    }
    return 0;
}
