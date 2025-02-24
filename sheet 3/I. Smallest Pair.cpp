/**
Given a number N and an array A of N numbers. Print the smallest possible result of A[i] + A[j]+ j - i , where 1 ≤ i < j ≤ N.

Input
The first line contains a number T (1≤T≤100) number of test cases.
Each test case contains two lines:
The first line consists a number N (2≤N≤100) number of elements.
The second line contains N numbers (-10^6≤A[i]≤10^6).

Output
For each test case print a single line contains the smallest possible sum for the corresponding test case.

**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,d;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
             cin>>a[i];
        }
        int mini = INT_MAX;
        for(int i=1;i<=n-1;i++)
        {
             for(int j=i+1;j<=n;j++)
             {
                 d = (a[i]+a[j]+j-i);
                 if(d<mini)
                    mini=d;
             }
        }
        cout << mini << endl;
    }
}
