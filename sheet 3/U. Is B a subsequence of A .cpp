/*#include <iostream>
using namespace std;
bool SubArray(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            i++;
            j++;
            if (j == m)
                return true;
        }
        else
        {
            i = i - j + 1;
            j = 0;
        }
    }
    return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int i,j,a[n],b[m];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(j=0; j<m; j++)
        cin>>b[j];
if (SubArray(a, b, n, m))
    cout << "YES";
else
    cout << "NO";
return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int m,n;
    cin >> m;
    cin >> n;
    int a[m],b[n];
    int i;
    for(i=0; i<m; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> b[i];
    }

    if(SubSequence(a, b))
        cout << "YES";
    else
        cout << "NO";;

    return 0;
}
