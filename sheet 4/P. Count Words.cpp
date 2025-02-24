#include <bits/stdc++.h>
using namespace std;

int countWords(string x);
int main()
{
    string x;
    getline(cin,x);
    cout<<countWords(x);
    return 0;
}
int countWords(string x)
{
    if(x.empty())
        return 0;
    int count = 1;

    for(unsigned int i = 0; i < x.size(); i++)
    {
        if(x[0] == ' ')
            continue;
        else if(x[i] == ' ' && x[i - 1] != ' ')
            count++;
    }
    return count;
}
