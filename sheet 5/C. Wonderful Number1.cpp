#include<bits/stdc++.h>
using namespace std;
void palindrome(int n);
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
       cout << "NO";
       return 0;
    }

    palindrome(n);
    return 0;
}
void palindrome(int n)
{
    int c = 0;
    int arr[1000];
    for (int i = 0; n > 0; i++)
    {
        arr[i] = n % 2;
        n /= 2;
        c++;
    }
    bool k = 1;
    for (int i = 0; i < c; i++)
    {
        if (arr[i] != arr[c - i - 1])
            k = 0;
    }
    if (k == 1)
        cout << "YES";
    else
        cout << "NO";
}
