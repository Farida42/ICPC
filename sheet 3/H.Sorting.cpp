#include <iostream>
using namespace std;
#define MAX 10000
int main()
{
    int arr[MAX];
    int n,i,j;
    int temp;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp  =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

	//print sorted array elements
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;


	return 0;

}
