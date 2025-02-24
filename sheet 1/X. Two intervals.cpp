#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[4],j,k;
    for(j=0; j<4; j++)
    {
        cin >>A[j];
    }

    if(A[1]>A[3])
        A[1]=A[3];
    if(A[0]>A[2])
        A[2]=A[0];
    if(A[1]>=A[2])
        cout << A[2] << " " << A[1];
    else
        cout << "-1";

    return 0;
}
