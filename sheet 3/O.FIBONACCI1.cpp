#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i;
    cin>>n;
    long long arr[51];
    arr[1]=0;
    arr[2]=1;
    for(i=3; i<51; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
        cout << arr[n] << endl;

    return 0;
}


