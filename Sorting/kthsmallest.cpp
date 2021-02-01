const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int LomutoPartition(int *arr,int low,int high)
{
	int pivot = arr[high];

	int j = low -1;

	for(int i=low;i<high;i++)
	{
		if(arr[i]<pivot)
		{
			j++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[j+1],arr[high]);

	return j+1;
}

int qsort(int *arr,int low,int high,int K)
{
	while(low<=high)
	{
		int P = LomutoPartition(arr,low,high);

		if(P == K-1)
			return P;
		else if(P>K-1)
			high = P-1;
		else 
			low = P+1;
	}

	return -1;
}


// int kthsort(int *arr,int low,int high,int k)
// {
	
// }
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;	cin>>n>>k;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

   	cout<<arr[qsort(arr,0,n-1,k)]<<endl;

   for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}