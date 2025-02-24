#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,i,sum=0,t;
    cin >> t ;
    while(t--){
    cin >> x >> y;
    sum = 0;
    for(i = x + 1;i < y ;i++){
            if(i % 2 != 0)
                sum += i;

    }
    for(i = y + 1;i < x ;i++){
         if(i % 2 != 0)
             sum += i;
    }
    cout << sum  << "\n";
    }
}
