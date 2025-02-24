#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i,a[n],c=0;
        for(i=0; i<n; i++)
            cin>>a[i];
        for( i = 0; i < n; i++)
        {
            c++;
            for(int j = i + 1; j < n; j++)
            {
                if(a[j-1] < a[j])
                    c++;
                else
                    break;
            }
        }
        cout << c << endl;
    }
    return 0;
}
