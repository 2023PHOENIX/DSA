const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void countingSort(int *arr,int n)
{
	int count[256];
	// arr[ ] =  1, 4, 4, 1, 0, 1
	for(int i=0;i<n;i++)
		count[i] = 0;

	for(int i=0;i<n;i++)count[arr[i]]++;
	// count[] = 1 3 0 0 2 
	for(int i=1;i<n;i++)
		count[i] = count[i-1] + count[i];
	// count[] = 1 4 4 4 6
	int output[n];


	for(int i=n-1;i>=0;i--)
	{
		output[count[arr[i]] -1 ] = arr[i];
		count[arr[i]]--;
	}

	for(int i=0;i<n;i++)
			arr[i]  = output[i];

}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {1,4,4,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    countingSort(arr,n);
    for(int i=0;i<n;i++)
    	cout<<arr[i]<<" ";


}