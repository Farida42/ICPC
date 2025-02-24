/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

}*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i,j,n;
    cin >> n;
    for (i=0; i<n; ++i)
    {
        fgets(s[i],sizeof(s[i]),stdin);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<(n-1); j++)
        {
            if(s[j]>s[j+1])
            {
                char ch = s[j];
                s[j] = s[j+1];
                s[j+1] = ch;
            }
        }
    }
    cout << s[i];
    return 0;
}
