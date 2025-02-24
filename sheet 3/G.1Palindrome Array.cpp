#include <iostream>
using namespace std;
 
int main()
{
    bool f =0;
    int n;
    cin>>n;
	long long arr[n];
    for(int i = 0; i < n; i++)  
    cin>>arr[i];
 
    for(int i = 0,j = n-1; i < n,j >= 0; i++,j--)
    {
            if(arr[i]!=arr[j])
            {
                f = 1;
                 break;
            }
    }
    if(f == 0)
     cout<<"YES";
     else
     cout <<  "NO";
 
	return 0;
 
}
 