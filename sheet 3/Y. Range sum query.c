#include<stdio.h>
int main()
{
    int n, q, l, r, sum=0, i, j;
    scanf("%d %d", &n, &q);
    long long a[n], b[n];
    b[0]=0;
    for(i=1;i<=n;i++)
    {
        scanf("%lld", &a[i]);
        b[i] = b[i-1]+a[i];
        //printf("s[i]=%d\n", s[i]);
    }
    while(q--)
    {
        scanf("%d %d", &l, &r);
        //sum = s[r]-s[l-1];
        printf("%lld\n", b[r]-b[l-1]);
    }
    return 0;
}
