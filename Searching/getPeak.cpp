const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int getPeak(int *arr,int n)
{
	int low{0},high{n-1};

	while(low<=high)
	{
		int mid = low + (high-low)/2;

		// if((mid==0 || arr[mid-1]<=arr[mid]) and
		// 	(mid==n-1 || arr[mid]<=arr[mid]+1))
		// 	return mid;
		// else if(mid>0 and arr[mid]>arr[mid-1])
		// 	low = mid + 1;
		// else
		// 	high = mid-1;

		if((arr[mid]>=arr[mid+1] or mid == n-1)and 
			(mid==0 or arr[mid]>=arr[mid-1]))
			return mid;
		else if(arr[mid]>=arr[mid+1])
			high = mid-1;
		else 
			low = mid+1;


	}

	return -1;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<getPeak(arr,n);
}