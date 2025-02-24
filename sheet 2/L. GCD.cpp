#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n1,n2,a,b,r,gcd;
  cin >> a >> b;

   n1=a;
   n2=b;
   r=a%b;

   while(n2!=0)
   {
       r=n1%n2;
       n1=n2;
       n2=r;
   }
   gcd = n1;


   cout << gcd;

 return 0;
}

