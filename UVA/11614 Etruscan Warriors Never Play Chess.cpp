#include<bits/stdc++.h>
using namespace std;
#define  fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll l = 0, r = 10e9, res;
        while(l <= r)
        {
            ll mid = l+ (r - l)/2;
            ll sum = (mid *(mid + 1)) / 2;
            if(sum < n)
            {
                res = mid;
                l = mid + 1;
            }
            else if(sum > n)
            {
                r = mid - 1;
            }
            else
            {
                res = mid;
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}
