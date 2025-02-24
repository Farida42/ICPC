#include<bits/stdc++.h>
using namespace std;
void print(int N);
int main()
{
    int x;
    cin >> x;
    print(x);
    return 0;
}
void print(int N)
{
    for(int i=1;i<N;i++)
    {
        cout << i << " ";
    }
    cout << N << endl;
}
