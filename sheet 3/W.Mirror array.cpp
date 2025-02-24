/**********************************
Given two numbers N, M and a 2D array of size N * M. Print the inverted array that appeared in the mirror.

Input
First line contains two numbers N, M (1≤N,M≤100) N donates number of rows and M donates number of columns.

Each of the next N lines will contain M numbers (1≤Ai,j≤109).

Output
Print the inverted array.
******************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> row(m);
    while(n--)
    {
        for(int j=0; j<m; j++)
        {
            cin>>row[j];
        }
        for(int j=row.size()-1; j>=0; j--)
        {
            cout << row[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
