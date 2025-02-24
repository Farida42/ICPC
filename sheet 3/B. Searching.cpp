/***
Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).
Note: X may be found once or more than once and may not be found.

Input
First line contains a number N (1≤N≤10^5) number of elements.
Second line contains N numbers (0≤A[i]≤10^9).
Third line contains a number X (0≤X≤10^9).

Output
Print the position of X in the first time you find it. If it doesn't exist print -1
***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int f = 0;
    for(i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            cout << i << endl;
            f = 1;
            break;
        }
    }
    if(f == 0)
         cout << -1 << endl;
    return 0;
}


