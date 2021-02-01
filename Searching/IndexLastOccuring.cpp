const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int lastOccuringIndex(int *arr,int n,int x)
{
	int low{0},high{n-1};

	while(low<=high)
	{
		int mid = (low+high)/2;

		if(arr[mid] == x)
		{
			if(mid==(n-1) || arr[mid]!=arr[mid+1])
				return mid;
			else
				low = mid + 1;
		}
		else if(arr[mid]>x)
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

    int n,x;	cin>>n>>x;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<lastOccuringIndex(arr,n,x);
}