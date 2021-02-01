const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int MinIndex(int *arr,int n,int x)
{
	int low{0},high{n-1};


	while(low<=high)
	{
		int mid = low + (high-low)/2;
		if(x==arr[mid])
		{
			if(mid==0)
				return mid;
			else
			{
				while(arr[mid-1]==x and (mid)!= 0)
				{
					mid--;
				}

				return mid;
			}
		}

		else if(x>arr[mid])
			low = mid +1;
		else
			high = mid -1;
	}

	return -1;
}

int recursiveIndex(int *arr,int low,int high,int x)
{
	if(low>high)
		return -1;

	int mid = low + (high - low)/2;

	if(arr[mid]==x){
		if(mid==0)
				return mid;
			else
			{
				while(arr[mid-1]==x and (mid)!= 0)
				{
					mid--;
				}

				return mid;
			}
	}
	else if(arr[mid]>x)
		return recursiveIndex(arr,low,mid-1,x);
	else
		return recursiveIndex(arr,mid+1,high,x);

}

int firstOccur(int *arr,int low,int high , int x)
{
	if(low>high)
		return -1;

	int mid = (low + high)/2 ;

	if(arr[mid]==x)
	{
			if(arr[mid]!=arr[mid-1]  or mid==0)
				return mid;
			else 
				return firstOccur(arr,low,mid-1,x);
	}
	else if(arr[mid]>x)
		return firstOccur(arr,low,mid-1,x);
	else 
		return firstOccur(arr,mid+1,high,x);

}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;	cin>>n>>x;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<MinIndex(arr,n,x)<<endl;
	cout<<recursiveIndex(arr,0,n-1,x)<<endl;

	cout<<firstOccur(arr,0,n-1,x);
}
