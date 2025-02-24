/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int i;
        if ((s[i] == '0' && s[i + 1] == '1'&& s[i + 2] == '0') && (s[i] == '1' && s[i + 1] == '0'&& s[i + 2] == '1'))
        {
            cout << "Good" << endl;
        }
        else
{
    cout << "Bad" << endl;
}
}
return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

bool isValid(char s[])
{
    char* p;
    if ((p = strstr(s, "010")) && (strstr(p + 4, "101")))
        return true;
    return false;
}
int main()
{
    char s[1000000] ;
    // cin >> s;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> s;
        if (isValid(s))
            cout << "Good" << endl;
        else
            cout << "Bad" << endl;
    }
    return 0;
}
