#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string line;
    int open=1;
    while(getline(cin,line))
    {
        bool flag=0;
        int i;
        if(line.size()== 0 || line == " ")
        {
            continue;
        }
        for(i=0; i<line.length(); i++)
        {
            if(line[i]=='/' && line[i+1]=='/' && open)
            {
                break;
            }
            else if(line[i]=='/' && line[i+1]=='*')
            {
                i++;
                open=0;
            }
            else if(line[i]=='*' && line[i+1]=='/' && !open)
            {
                i++;
                open=1;
            }
            else if(open==1)
            {
                cout<<line[i];
                flag=1;
            }
        }
        if(flag && open==1)
        {
            cout<<endl;
        }
    }

    return 0;
}
