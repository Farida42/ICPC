#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s,t;
    cin>>s>>t ;
    int len = s.length(),len1 = t.length();
    cout<<len<<" "<<len1<<"\n";
    cout<<s+t<<endl;
    swap(s[0],t[0]);
    cout << s << " " << t << endl;
    return 0;
}

