#include<bits/stdc++.h>
using namespace std;
void RightRotate(int a[], int n, int k)
{
    k = k % n;
    for(int i = 0; i < n; i++)
    {
       if(i < k)
       {
           cout << a[n + i - k] << " ";
       }
       else
       {
           cout << (a[i - k]) << " ";
       }
    }
    cout << "\n";
}
int main()
{
    int n,x;
    cin >> n >> x;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    RightRotate(A, n, x);
    return 0;
}
