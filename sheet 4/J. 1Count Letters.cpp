#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, frq[125]= {0};
    char s[10000010];
    scanf("%c",&s);
    for(i=0 ; s[i]!='\0' ; i++)
    {
        frq[s[i]]++;
    }

    for(i='a' ; i<='z' ; i++)
    {
        if(frq[i]>0)
        {
            printf("%c : %d\n", (char)i, frq[i]);
        }
    }

    return 0;
}
