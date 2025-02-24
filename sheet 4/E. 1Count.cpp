#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000000];
    int i, sum = 0;
    cin >> s;
    for (i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= '0') && (s[i] <= '9'))
        {
            sum += (s[i] - '0');
        }
    }
    printf("%d", sum);
}
