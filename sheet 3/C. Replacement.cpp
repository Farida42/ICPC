/************************
Given a number N and an array A of N numbers. Print the array after doing the following operations:
1.Replace every positive number by 1.
2.Replace every negative number by 2.

Input
First line contains a number N (2≤N≤1000) number of elements.

Second line contains N numbers (-10^5 ≤ A[i] ≤ 10^5).

Output
Print the array after the replacement and it's values separated by space.

Simple input
5
1 -2 0 3 4
Simple output
1 2 0 1 1
***********************************/
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
    for(i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            cout<<1<<" ";
        }
        else if(arr[i]<0)
        {
            cout<<2<<" ";
        }
        else
        {
            cout<<0<<" ";
        }
    }
    return 0;
}
