const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int ternarySearch(int *arr,int low,int high,int x)
{

	if(low>high)
		return -1;



	int mid1 = low + (high-low)/3;
	int mid2 =  high - (high-low)/3;

	if(arr[mid1]==x)
		return mid1;
	if(arr[mid2]==x)
		return mid2;

	if(x<mid1)
		return ternarySearch(arr,low,mid1-1,x);
	else if(x>mid2)
		return ternarySearch(arr,mid2+1,high,x);
	else
		return ternarySearch(arr,mid1+1,mid2-1,x);


}

int ternarySearch(int *arr,int n,int x)
{
	int low{0},high{n-1};

	


	while(low<=high)
	{
		int mid1 = low + (high-low)/3;
		int mid2 = high - (high-low)/3;


		if(arr[mid1]==x )
			return mid1;
		if(arr[mid2]==x)
			return mid2;

		else if(arr[mid1]>x)
			high = mid1 -1;
		else if(arr[mid2]<x)
			low = mid2 + 1;
		else
		{
			low = mid1 + 1;
			high = mid2 -1;
		}


	}

	return -1;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;	cin>>n>>k;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    // cout<<ternarySearch(arr,n,k);
    	cout<<ternarySearch(arr,0,n-1,k);
}