#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100000],i,even=0,odd=0,pos=0,neg=0,n;
    cin >> n;

    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);

    if(a[i]%2==0)
        even++;
    else
        odd++;
    if(a[i]>0)
        pos++;
    else if(a[i]<0)
        neg++;
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d",neg);

}
