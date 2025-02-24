#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int size,count,i;
    cin >> size >> count ;
    int array[1000001] = {0};
    for(i=0;i<size;i++)
    {
        int num;
        cin >> num;
        if(array[num] == 0)
          array[num] = 1;
        else
          array[num] += 1;
    }
    for(i=1;i<=count;i++)
    {
        cout << array[i]  << "\n";
    }
    return 0;
}
