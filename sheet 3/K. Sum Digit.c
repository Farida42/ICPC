#include <stdio.h>
int findSum(int A[], int N)
{
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
     for (int i = 0; i < N; i++)
     {
        scanf("%1d", &A[i]);
     }

    printf("%d", findSum(A, N));
    return 0;
}
