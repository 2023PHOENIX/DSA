const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int firstOccurence(int *arr,int low,int high,int x,int n)
{
	if(low>high)
		return -1;

	int mid = (low + high)/2;

	if(arr[mid] == x)
	{
		if(arr[mid]!=arr[mid-1] or mid==0)
			return mid;
		else
			return firstOccurence(arr,low,mid-1,x,n);
	}
	else if(arr[mid]<x)
		return firstOccurence(arr,mid+1,high,x,n);
	else
		return firstOccurence(arr,low,mid-1,x,n);

}

int lastOccurrence(int *arr,int low,int high,int x,int n)
{
	if(low>high)
		return -1;

	int mid = (low + high)/2;

	if(arr[mid]==x)
	{
		if(arr[mid]!=arr[mid+1] or mid == n-1)
			return mid;
		else
			return lastOccurrence(arr,mid+1,high,x,n);
	}
	else if(arr[mid]>x)
		return lastOccurrence(arr,low,mid-1,x,n);
	else
		return lastOccurrence(arr,mid+1,high,x,n);
}
// complexity O(log n)
int countOccurrence(int *arr,int low,int high,int x,int n)
{
	int first = firstOccurence(arr,low,high,x,n);

	if(first==-1)
		return -1;

	return (lastOccurrence(arr,low,high,x,n) - first +1);
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;	cin>>n>>k;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

 //    cout<<firstOccurence(arr,0,n-1,k,n);
	// cout<<lastOccurrence(arr,0,n-1,k,n);

	cout<<countOccurrence(arr,0,n-1,k,n);
// 6 20
// 10 20 20 20 40 40
}