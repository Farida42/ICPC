#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char s;
    scanf("%d %c %d",&a,&s,&b);
    if(a > b)
    {
        if(s == '>')
            cout << "Right";
        else
            cout << "Wrong";
    }
    if(a < b)
    {
        if(s == '<')
            cout << "Right";
        else
            cout << "Wrong";
    }
    if(a == b)
    {
        if(s == '=')
            cout << "Right";
        else
            cout << "Wrong";
    }
    return 0;
}
