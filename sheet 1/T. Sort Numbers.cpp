#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,h,m,l;
    cin >> a >> b >> c;

    if (a>b)
    {
        m = a;
        l = b;
    }
    else
    {
        m = b;
        l = a;
    }
    if (m>c)
    {
        h = m;
        if(l>c)
        {
            m = l;
            l = c;
        }
        else
        {
            m = c;
        }
    }
    else
        h = c;
    cout << l << "\n" << m << "\n" << h << "\n\n" << a << "\n" << b << "\n" << c ;

    return 0;
}
