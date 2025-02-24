#include<bits/stdc++.h>
using namespace std;
int main(){
    double n;
    scanf("%lf",&n);
    int i;
    i = (int)n;
     if(i==n){
         printf("int %d",i);
     }
     else
     {
          printf("float %d %f",i,n-i);
     }
     return 0;
}
