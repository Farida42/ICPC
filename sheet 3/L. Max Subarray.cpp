/**
A sub-array of array is an array composed from a contiguous block of the original array's elements.
In other words A sub-array A[i-j], where (1≤i≤j≤N), is a sequence of integers A[i], A[i]+1, ..., Aj.

For Example :
IF array = [1,6,3,7] then the sub arrays are [1] , [6] , [3] , [7] , [1,6] , [6,3],[3,7], [1,6,3] , [6,3,7] , [1,6,3,7] .
Something like [1,3] would not be a sub-array as it's not a contiguous subsection of the original array.
Given a number N and an array A of N numbers. Print the maximum number of every sub-array separated by space.

Input
First line contains a number T (1≤T≤5) number of test cases.
Each test case contains two lines:
First line contains a number N (1≤N≤100) number of elements.
Second line contains N numbers (-10^5≤A[i]≤10^5).
Output
For each test case print a single line contains the maximum number of every sub-array separated by space.
*/
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
        for(int i=0; i<n; i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<n;i++ )
        {
            cout<<A[i]<<" ";
        }
        for( int i=0;i<n;i++)
        {
            int maxi=A[i];
            for(int j=i+1;j<n;j++)
            {
                maxi = max(maxi,A[j]);
                cout<<maxi<<" ";
            }
        }
        cout << "\n";
    }
        return 0;
}
