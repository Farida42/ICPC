#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t,len,len1,len2;
    int test;
    while(test--)
    {
        cin>>s>>t;
        len1=s;
        len2=t;
        len=max(len1,len2);
        for(int i=0;i<len; i++)
        {
            if(len<len1)
                printf("%c",s[i]);
            if(len<len2)
                printf("%c",t[i]);
        }
    }
    return 0;
}

