#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, s = 0;
    scanf("%d", &a);
    c = a;
    while(a > 0)
    {
        b = a%10;
        s = (s*10)+b;
        a /= 10;
    }

    if(s == c)
    {
        cout << s << "\n" << "YES";
    }
    else
    {
        cout << s << "\n" << "NO";
    }

    return 0;
}
