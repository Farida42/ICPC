// Online C++ compiler to run C++ program online
#include<stdio.h>
int main()
{
	int  min, max;
	int n, i, temp1 = 0, temp2 = 0, pos1 = 0, pos2 = 0;
	scanf("%d", &n);
	int a[n];
	for (i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
		if (i == 0)
		{
			min = max = a[i];
		}
		if (a[i]<min)
			min = a[i];
		else if (a[i]>max)
			max = a[i];
	}

	for (i = 0; i<n; i++)
	{
		if (min == a[i])
		{
			pos1 = i;
			break;
		}
	}
	for (i = 0; i<n; i++)
	{
		if (max == a[i])
		{
			pos2 = i;
			break;
		}
	}
	temp1 = a[pos1];
	temp2 = a[pos2];
	a[pos1] = temp2;
	a[pos2] = temp1;
	for (i = 0; i<n; i++)
	{
		  printf("%d ", a[i]);
	}
	return 0;
}
