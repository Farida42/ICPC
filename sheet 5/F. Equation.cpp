#include<bits/stdc++.h>
using namespace std;

long long Equation(int n,int x)
{
    int i;
    long long result=0;
    for(i=2;i<=x;i+=2)
    {
        result += pow(n,i);
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,x;
    cin >> n >> x;
    cout<<Equation(n,x)<<endl;
    return 0;
}

