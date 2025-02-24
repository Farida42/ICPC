#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double x1,y1,x2,y2,Distance;
    cin>>x1>>y1>>x2>>y2;
    Distance=sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));

    cout<<fixed<<setprecision(8)<<Distance<<endl;

    return 0;
}
