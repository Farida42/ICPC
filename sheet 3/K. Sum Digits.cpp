#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s=0, N;
    cin >> N;
    char a[N];
    for(int i=0; i<N; i++)
    {
      cin >> a[i];
      s += (a[i] - '0');
    }
    cout << s ;
}

