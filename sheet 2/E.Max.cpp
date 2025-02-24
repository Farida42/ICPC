#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()

{
    int i, n, lar, elem;
    scanf ("%d", &elem);
    scanf ("%d", &n);
    lar = n;
    for (i=1; i<= elem -1 ; i++)
    {
        scanf ("%d",&n);
        if (n>lar)
            lar=n;
   }
   printf ("%d", lar);

return 0;

}
