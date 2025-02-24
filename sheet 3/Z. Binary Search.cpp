#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int &i:v)
    {
        cin >> i;
    }
    sort(v.begin(),v.end());
    while(q--)
    {
        long long key;
        cin >> key;
        if (binary_search(v.begin(),v.end(), key))
            cout << "found\n";
        else
            cout << "not found\n";
    }

    return 0;
}
/*using namespace std;
int binarySearch(int arr[], int p, int r, int num)
{
    if (p <= r)
    {
        int mid = (p + r)/2;
        if (arr[mid] == num)
            return mid ;
        if (arr[mid] > num)
            return binarySearch(arr, p, mid-1, num);
        if (arr[mid] > num)
            return binarySearch(arr, mid+1, r, num);
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
    int num ;
    cin>>num;
    int index = binarySearch (arr, 0, n-1, num);
    if(index == -1)
        cout<<"not found";
    else
        cout<<"found";
    return 0;
}*/
