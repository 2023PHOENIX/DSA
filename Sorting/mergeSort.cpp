const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


void merge(int *arr,int low,int mid , int high)
{
	int i = low;
	int j = mid +1;
	int k = low ;

	int brr[high - low+1] ={0};

	while(i<=mid and j<=high)
	{
		if(arr[i]<arr[j])
			brr[k++] = arr[i++];
		else 
			brr[k++] = arr[j++];
	}

	while(i<=mid)
		brr[k++] = arr[i++];
	while(j<=high)
		brr[k++] = arr[j++];

	for(int i=low;i<=high;i++)
		arr[i] = brr[i];
}
void mergeSort(int *arr,int low ,int high){

	if(low<high){
	
		int mid = low + (high - low )/2;

		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);

		merge(arr,low,mid,high);
	}
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    mergeSort(arr,0,n-1);

	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}