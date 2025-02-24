#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double X, Y, R, N,  x, y, x1, y1,result;
    cin>>X>>Y>>R>>N;

    while(N--)
    {
        cin>>x>>y;
        x1 = X-x;
        y1 = Y-y;
        result = sqrt(pow(x1,2)+pow(y1,2));
        cout<<(result<=R?"YES":"NO")<<endl;
    }
return 0;
}

