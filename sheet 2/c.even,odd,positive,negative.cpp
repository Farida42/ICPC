#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,Even=0,Odd=0,Positive=0,Negative=0;
    cin>>n;
    for (long long i =1; i<n+1; i++) {
        cin>>a;
        if(a%2==0){
            Even++;
            if(a>0)
                Positive++;
            else if(a!=0)
                Negative++;
        }
        else {
            Odd++;
            if(a<0)
                Negative++;
            else if(a!=0)
                Positive++;
        }
    }

    cout<<"Even: "<<Even<<'\n'<<"Odd: "<<Odd<<'\n'<<"Positive: "<<Positive<<'\n'<<"Negative: "<<Negative<<'\n';
}

