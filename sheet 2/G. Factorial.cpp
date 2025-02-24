#include<bits/stdc++.h>
using namespace std;

double fact(int n);
void dis(double t);

int main()
{
    int i,a,c[100];
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0; i<a; i++)
    {
        dis(fact(c[i]));
    }
    return 0;
}
double fact (int n)
{
    double f;
    if(n==0||n==1)
        f=(double) 1;
    else
        f=(double) n*fact(n-1);
    return f;
}
void dis(double t)
{
    printf("%.0f\n",t);
}
