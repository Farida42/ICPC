#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    cin >> n;
    if(n < 0 || n > 100)
    {
        cout << "Out of Intervals" << endl;
    }
    else
    {
        if(n >= 0 && n <= 25)
        {
            cout << "Interval [0,25]" << endl;
        }
        else if(n > 25 && n <= 50)
        {
            cout << "Interval (25,50]" << endl;
        }
        else if(n > 50 && n <= 75)
        {
            cout << "Interval (50,75]" << endl;
        }
        else
        {
            cout << "Interval (75,100]" << endl;
        }
    }
    return 0;
}
