#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i=1; i<=n; i++)
        {
            cin>>A[i];
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=i; j<=n; j++)
            {
                int mx = -1000000;
                for(int x=i; x<=j; x++)
                {
                    if(A[x]>mx)
                    {
                        mx=A[x];
                    }
                }
                cout<<mx<<" ";
            }
        }
        cout << "\n";
    }
    return 0;
}

