#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
	return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
	int x ;
	cin>>x;

	// Function call
	int Find = search(arr, n, x);
	(Find == -1)? cout << "-1" : cout << Find;
	return 0;
}
