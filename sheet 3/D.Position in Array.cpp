#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000],n;
    cin >>n ;
    int i;
    for(i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(i = 0; i < n; i++)
    {
        if(a[i] <= 10)
        {
            printf("A[%d] = %d\n", i, a[i]);
        }
    }
    return 0;
}

