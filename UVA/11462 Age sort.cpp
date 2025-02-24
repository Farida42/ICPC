#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// counting sort sorting algorithm
void CountingSort(int input_array[],int s, int r)
{
	int output_array[s];
	int count_array[r];

	for(int i=0;i<r;i++)
	  {
		count_array[i]=0;
       }
	for(int i=0;i<s;i++)
	{
		++count_array[input_array[i]];
	}
	for(int i=1;i<r;i++)
	{
		count_array[i]+=count_array[i-1];
	}
	for(int i=0;i<s;i++)
	{
		output_array[--count_array[input_array[i]]] = input_array[i];
	}

	for(int i=0;i<s;i++)
	{
		input_array[i]=output_array[i];
	}
}

int main()
{
    fast;
	int size=0;
	int range=2000000;
    while(scanf("%d",&size)!=1 && size!=0)
	{
 	int myarray[size];
	for(int i=0;i<size;i++)
	{
		cin>>myarray[i];
	}

	CountingSort(myarray,size,range);  // counting sort called
	for(int i=0;i<size;i++)
	{
		cout<<myarray[i]<<" ";
	}
	cout<<endl;
	}

	return 0;
}
