#include<bits/stdc++.h>
using namespace std;

void avr(int num)
  {
  double a[100000],sum=0;
  for(int i = 0 ; i< num ; i++)
   {
      cin>>a[i];
      sum += a[i];
   }
   double average = sum/num;
   cout<<fixed<<setprecision(7)<<average;
}

int main()
{
   int n;
   cin>>n;
   avr(n);

   return 0;
}
