#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<long long>v;

    string s;
    cin >> s;
    int n = 0,e = 0, g = 0, y = 0,p = 0, t = 0,i;
    int size = s.size ();
    for (i = 0; i < size; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
        if (s[i] == 'e')
        {
            e++;
        }
        if (s[i] == 'g')
        {
            g++;
        }
        if (s[i] == 'y')
        {
            y++;
        }
        if (s[i] == 'p')
        {
            p++;
        }
        if (s[i] == 't')
        {
            t++;
        }
    }
    v.push_back(e);
    v.push_back(g);
    v.push_back(y);
    v.push_back(p);
    v.push_back(t);
    int min = *min_element(v.begin(), v.end());
    cout<<min<<endl;
    return 0;
}
