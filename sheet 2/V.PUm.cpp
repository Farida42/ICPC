#include<bits/stdc++.h>
using namespace std;
int main(){
    int c,i;
    cin>>c;
    for(i=1;i<=c*4;i++)
        {
            if(i%4==0)
                cout<<"PUM"<<endl;
            else
                cout<<i<<" ";
         }
return 0;
}
