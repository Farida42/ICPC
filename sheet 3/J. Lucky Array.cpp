#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,minf,minc;
    minf=100000000;
    minc=0;
    cin >> n;
    while(n--)
    {
        cin >> a;
        if(a<minf)
        {
            minf=a;
            minc=0;
            minc++;
        }
        else if(a==minf)
            minc++;
    }

    if(minc%2==0)
        cout << "Unlucky";
    else
        cout << "Lucky";
    return 0;

}
