/*******************************************
Given 2 numbers N and Q, an array A of N number and Q number of pairs L, R. For each query Q print a single line
that contains the summation of all numbers from index L to index R.

Input
First line contains two numbers N, Q (1≤N,Q≤10^5) where N is number of elements in A and Q is number of query pairs.
Second line contains N numbers(1≤Ai≤10^9).
Next Q lines contains L,R (1≤L≤R≤N).

Output
For each query Q print a single line that contains the summation of all numbers from index L to index R.

simple input
6 3
6 4 2 7 2 7
1 3
3 6
1 6
simple output
12
18
28
********************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,i;
    cin >> n >> q ;
    vector<long long> array(n+1);
    for(i=1;i<array.size();i++)
    {
        cin >> array[i];
        array[i] += array[i-1];
    }
    while(q--)
    {
        int l,r;
        cin >> l >> r ;
        cout << array[r] - array[l-1] << "\n";
    }
    return 0;
}
