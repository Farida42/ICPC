#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string url;
    cin>>url;

    int size = url.size();
    int i,j;
    for(i=0; i<size; i++)
    {
        if(url[i]=='?')
        {
            i++;
            for(j=i; j<size; j++)
            {
                if(url[j]=='=')
                {
                    cout<<": ";
                    continue;
                }
                if(url[j]=='&')
                {
                    cout<<endl;
                    continue;

                }
                cout<<url[j];
            }
            break;
        }
    }
    return 0;
}
