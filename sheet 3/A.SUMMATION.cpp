/*************************************
Given a number N and an array A of N numbers. Print the absolute summation of these numbers.
absolute value : means to remove any negative sign in front of a number .
EX : |-5| = 5 , |7| = 7

Input
First line contains a number N (1≤N≤10^5) number of elements.
Second line contains N numbers (-10^9 ≤ A[i] ≤ 10^9).

Output
Print the absolute summation of these numbers.
********************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,s=0;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        s+=arr[i];
    }
    long long int result=abs(s);
    cout<<result;
    return 0;

}
