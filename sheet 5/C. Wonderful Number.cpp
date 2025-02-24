#include<bits/stdc++.h>
using namespace std;
void pa(int n);
int main()
{
    int n;
    cin >> n;
    if(n%2==0)
    {
        cout << "NO" << endl;
        return 0;
    }
    pa(n);
    return 0;
}
void pa(int n)
{
   int a[100];
    int i=0;
    while(n!=0)
    {
        a[i] = n%2;
        n/=2;
        i++;
    }
    for(int j = 0,k=i-1; j <i && k>=0; j++,k--)
    {
        if(a[j] != a[k])
        {
            cout<<"NO"<<endl;
            return ;
        }
    }
    cout<<"YES"<<endl;

}
