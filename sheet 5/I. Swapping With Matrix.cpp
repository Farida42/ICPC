#include<bits/stdc++.h>
using namespace std;
void printMatrix(int mat[x][y])
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    int n,x,y;
    cin >> n >> x >> y;
     printMatrix(mat);
    return 0;
}

