#include<bits/stdc++.h>
using namespace std;
void Swap(int x,int y);
int main()
{
    int a,b;
    cin >> a >> b;
    Swap(a,b);
    return 0;
}
void Swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    cout<<x<<" "<<y<<endl;

}
