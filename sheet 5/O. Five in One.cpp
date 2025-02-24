#include <bits/stdc++.h>
using namespace std;
int maximunDivisors(int n)
{
    int j,count=0;
    int m=n/2;
    for(j=1; j<=m; j++)
    {
        if(n%j==0)
        {
            count++;
        }
    }
    return count;
}
bool Palindrome(int n)
{
    int temp=n;
    int remeinder,sum=0;
    while(n>0)
    {
        remeinder=n%10;
        sum=(sum*10)+remeinder;
        n/=10;
    }
    if(temp==sum)
        return true;
    else
        return false;
}

int main()
{
    int i,j,n,countPrime=0,countPalindrome=0;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout << "The maximum number : "<<a[n-1] << "\n";
    cout << "The minimum number : "<< a[0] << "\n";
    for(i=0; i<n; i++)
    {
        if(Palindrome(a[i]))
        {
            countPalindrome++;
        }
        int m=a[i]/2;
        int flag=0;
        for(j=2;j<=m;j++)
        {
            if(a[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0&&a[i]!=1)
        {
            countPrime++;
        }
    }
    cout<<"The number of prime numbers : "<<countPrime<< "\n";
    cout <<"The number of palindrome numbers : " << countPalindrome << "\n";
    int c,max,index;
    for(i=0;i<n;i++)
    {
        c=maximunDivisors(a[i]);
        if(i==0)
        {
            max=c;
            index=i;
        }
        else
        {
            if(c>=max)
            {
                max=c;
                index=i;
            }
        }
    }
    cout<<"The number that has the maximum number of divisors : "<<a[index]<<endl;
}
