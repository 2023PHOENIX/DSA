const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int merge(int *arr,int low,int mid,int high)
{
	int i,j,k;

	int n1 = mid - low + 1;
	int n2 = high - mid;

	int L[n1],R[n2];
	int counter = 0;
	for(int i=0;i<n1;i++)
		L[i] = arr[i+low];
	for(int j=0;j<n2;j++)
		R[j] = arr[j+mid+1];

	i=0;j=0;k=low;

	while(i<n1 and j<n2){

		if(L[i]<=R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else 
		{
			arr[k] = R[j];
			j++;
			counter = counter + (n1-i);
		}
		k++;

	}

	while(i<n1)
		arr[k++] = L[i++];
	while(j<n2)
		arr[k++] = R[j++];

	return counter;
}
int mergeSort(int *arr,int low,int high)
{
	int result = 0;
	if(low<high)
	{
		int mid = low + (high-low)/2;

		result += mergeSort(arr,low,mid);
		result += mergeSort(arr,mid+1,high);

		result += merge(arr,low,mid,high);
	}

	return result;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<"This is count invesion : "<<
	mergeSort(arr,0,n-1)<<endl;

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}