#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
        {
            int c=0,n;
            cin>>n;
            while(n!=0)
                {
                    int digit=n%2;
                    if(digit==1)
                        {
                            c++;
                        }
                    n/=2;
                }
                int p=0,dec=0,k;
                for(k=1;k<=c;k++)
                    {
                        dec+=(1*pow(2,p));
                        p++;
                    }
                cout<<dec<<endl;
                }
}
