const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// lomuto partition

// it work slower than Hoare partition

int lomuto(int *arr,int low,int high)
{
	int pivot = arr[high];

	int j=low-1;

	for(int i=0;i<high;i++)
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


// Hoare's partition

int Hoare(int *arr,int low,int high)
{
	int pivot = arr[low];

	int i = low -1;
	int j = high +1;
	while(true)
	{
	do{
		i++;
	}while(arr[i]<pivot);
	do{
		j--;
	}while(arr[j]>pivot);

	if(i>=j)return j;

	swap(arr[i],arr[j]);
	}

}

void qsortLomuto(int *arr,int low,int high)
{
	if(low<high)
	{
		int P = partition(arr,low,high);

		qsortLomuto(arr,low,mid-1);
		qsortLomuto(arr,mid+1,high);
	}
}


void qsortHoare(int *arr,int low,int high)
{
	if(low<high)
	{
		int P = partition(arr,low,high)

		qsortHoare(arr,low,mid);
		qsortHoare(arr,mid+1,high);
	}
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    // lomuto(arr,0,n-1);

    	Hoare(arr,0,n-1);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}