#include <bits/stdc++.h>
using namespace std;
int sumofarray(int a[],int n)
 {
 	int min,max,i;
 	min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
                min=a[i];
         if(max<a[i])
                max=a[i];
    }

    cout << min << " "<< max;
 }
int main()
{
    int a[1000],i,n,sum;
    cin >> n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sumofarray(a,n);
}
