#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define T 50005
int vis[T],cnt;
vector<int>friends[T];

void dfs(int u)
{
    int v,i;
    vis[u]=1;
    for(i=0; i<friends[u].size(); i++)
    {
        v=friends[u][i];
        if(vis[v]==0)
        {
            cnt++;
            dfs(v);
        }
    }
}

int main()
{
    fast;
    int t,m,n,a,b,i,j,ma;
    cin>>t;
    while(t--)
    {
        memset(friends,0,sizeof(friends));
        memset(vis,0,sizeof(vis));

        cin>>n>>m;
        for(i=0;i<m;i++)
        {
            cin>>a>>b;
            friends[a].pb(b);
            friends[b].pb(a);
        }
        ma =0;
        for(j=1;j<=n;j++)
        {
            cnt=1;
            if(vis[j]==0)
            {
                dfs(j);
            }

            if(cnt>ma)
            {
                ma=cnt;
            }
        }

         cout<<ma<<endl;

    }



    return 0;
}
