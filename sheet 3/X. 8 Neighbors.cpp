/***********************
Given two numbers N and M, a 2D array A of size N * M which contains 'x' or '.' only and two numbers X, Y which donates a cell position in A such that X is the row number and Y is the column number.
Determine whether all neighbors of the given cell are 'x' or not.
Note: The neighbor cell is any cell that shares an edge or a corner and it should be inside 2D array.

Input
First line contains two numbers N, M (2≤N,M≤100) N donates number of rows and M donates number of columns.
Each of the next N lines will contain M symbol can be ('.' or 'x').
Last line contains two numbers X, Y (1≤X≤N,1≤Y≤M).

Output
Print "yes" if all neighbors of the given cell are 'x' otherwise, print "no" without quotations.
****************************/
#include<bits/stdc++.h>
int dr[ ]= {-1,-1,0,1,1,1,0,-1};
int dc[ ]= {0,1,1,1,0,-1,-1,-1};
using namespace std;
bool valid(const int r,const int c,const vector<string>&a)
{
    if(r<0 || r>=a.size() || c<0 || c>=a[0].size())
        return false;
    return true;
}
int main()
{
    int n,m,i,j;
    cin >> n >> m;
    vector<string> a(n);
    for(i=0; i<n; ++i)
    {
        cin >> a[i];
    }
    int x,y;
    cin >> x >> y;
    --x,--y;
    bool yes = true;
    for(i=0; i<8; ++i)
    {
        int r,c;
        r = x+dr[i],c = y+dc[i];
        if(valid(r,c,a) && a[r][c] != 'x')
            yes=false;
    }
    cout << (yes ? "yes\n" : "no\n");
    return 0;
}
