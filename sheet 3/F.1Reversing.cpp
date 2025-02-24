#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int input[500], output[500], n, i;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    for(i = 0; i < n; i++)
    {
        output[i] = input[n-i-1];
        cout << output[i] << " ";
    }

    return 0;
}
