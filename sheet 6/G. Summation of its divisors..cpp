#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long i, n,sum=0;
    cin>>n;
    for(i=1;i<=sqrt(n);i++)
        {
         if(n % i == 0)
           {
               sum += i;
               if(i != sqrt(n))
               {
                   sum += n/i;
               }
           }
        }
     cout<<sum<<endl;

	return 0;
}
