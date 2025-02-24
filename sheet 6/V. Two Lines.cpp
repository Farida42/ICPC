#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main()
{
    long long x1,y1,x2,y2,x3,y3,x4,y4,m1,m2;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    m1=(y2-y1)*(x4-x3);
    m2=(y4-y3)*(x2-x1);
    m1==m2? cout << "YES" : cout << "NO";
}
