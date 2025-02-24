#include<bits/stdc++.h>
using namespace std;
void reorder(int A[], int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] != 0)
		{
			A[k++] = A[i];
		}
	}
	for (int i = k; i < n; i++) {
		A[i] = 0;
	}
}

int main()
{
	int n;
	scanf("%d",&n);
    int A[n] ;
     for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
	reorder(A, n);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}

	return 0;
}
