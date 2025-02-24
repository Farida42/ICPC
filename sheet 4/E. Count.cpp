#include<bits/stdc++.h>
using namespace std;

//char to int conversion
#define charToInt(c) (c-'0')

int main()
{
    int sum = 0;
    string str ;
    cin >> str;

    for (int i=0; i<str.length(); ++i)
    {
//Check if char is digit
        if (isdigit(str[i]))
        {
//convert charater to int
            int a = charToInt(str[i]);

//Sum digits
            sum = sum + a-'0';
        }

    }
//Display Sum
    cout<<sum<<endl;

    return 0;
}
