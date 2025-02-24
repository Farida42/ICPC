#include<bits/stdc++.h>
using namespace std;

bool permutations(int arr[], int arr1[], int n)
{
    map<int, int> hm;

    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        hm[x]++;
    }


    for (int i = 0; i < n; i++)
    {
        int x = arr1[i];
        if(hm[x] == 0)
        {
            return false;
        }
        hm[x]--;
    }
    return true;
}
int main()
{
    int size;
    scanf("%d",&size);
    int i;
    int arr[size];
    int arr1[size];
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
        scanf("%d",&arr1[i]);

    if (permutations(arr, arr1, size))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
