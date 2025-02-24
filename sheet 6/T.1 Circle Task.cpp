#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long  X, Y, R, N, x[1000], y[1000], x1, y1;
    cin>>X>>Y>>R>>N;
    for(int i=0;i<N;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(int i=0; i<N; i++)
    {
         x1 = X-x[i];
         y1 = Y-y[i];
         double result = sqrt(pow(x1,2)+pow(y1,2));
    if(result>R)
    {
        cout<<"NO"<<endl;
    }
    else
    {
           cout<<"YES"<<endl;
    }
}
return 0;
}
