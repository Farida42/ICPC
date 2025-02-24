#include <bits/stdc++.h>
using namespace std;
void prime(int n);
int main()
    {
     int n,t;
     cin>>t;
     while(t--)
     {
     cin>>n;
     if (n==1)
        {
            cout<<"NO\n";
            continue;
        }
        prime(n);
     }
    return 0;
    }

 void prime(int n)
    {
     bool flag=0;
     for(int i = 2; i*i <= n ; i++)
     {
        if(n % i == 0)
         {
            flag = 1;
            break;
         }
     }
      if (flag==0)
         cout<<"YES\n";
      else
         cout<<"NO\n";
    }

