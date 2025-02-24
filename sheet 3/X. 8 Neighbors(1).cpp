#include<bits/stdc++.h>
using namespace std;
int main()
{

    char a[105][105];
    int n,m,x,y;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>x>>y;

    if(a[x-1][y-1]=='.' || a[x-1][y]=='.' || a[x][y-1]=='.' ||  a[x-1][y+1]=='.' ||
       a[x+1][y-1]=='.'|| a[x+1][y]=='.' || a[x][y+1]=='.' || a[x+1][y+1]=='.')
      cout << "no\n";
      else
      cout << "yes\n";
}
