const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void bubbleSort(int *arr,int n)
{
	// 9 8 1 3 
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
		}
	}
}

void selectionSort(int *arr,int n)
{
	for(int i=0;i<n-1;i++)
	{
		int minIndex = i;

		for(int j=i+1;j<n;j++)
			if(arr[minIndex]>arr[j])
				minIndex = j;

		swap(&arr[i],&arr[minIndex]);

	}
}

void insertionSort(int *arr,int n)
{	
	int i,j,key;
	for(int i=1;i<n;i++)
	{
		key = arr[i];
		j = i-1;

		while(j>=0 and arr[j]>key)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);


    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];
    	// bubbleSort(arr,n);
    	// selectionSort(arr,n);
    	insertionSort(arr,n);

    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}