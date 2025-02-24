#include <bits/stdc++.h>
using namespace std;

long long count(long long n)
{
	return int ((-1 + sqrt(1 + 8 * n)) / 2);
}

int main()
{
	long long n ;
	cin>>n;

	cout << count(n);

	return 0;
}
