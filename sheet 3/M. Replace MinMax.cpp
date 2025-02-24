#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,min,max,minindex,maxindex;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    min = a[0];
    max = a[0];
    minindex = 0;
    maxindex = 0;
    for(int i = 1; i < n; i++)
    {
        if(min > a[i])
        {
            min = a[i];
            minindex = i;
        }
        if(max < a[i])
        {
            max = a[i];
            maxindex = i;
        }
    }
    a[minindex] = max;
    a[maxindex] = min;
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
