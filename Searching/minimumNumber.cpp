const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// N = 10
// arr[] = {2,3,4,5,6,7,8,9,10,1}
// Output: 1
// Explanation: The array is rotated 
// once anti-clockwise. So minium 
// element is at last index (n-1) 
// which is 1.


void findMinimumNumber(int *arr,int n)
{
	int low{0},high{n-1};

	

	while(low<=high)
	{
		int mid = low + (high-low)/2;


		if(arr[mid]==0 || arr[mid]<arr[mid-1])
		{	cout<<arr[mid];return;}
		else if(arr[mid]>arr[high])
			low = mid +1;
		else 
			high = mid;

		

	}
	
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);


    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    findMinimumNumber(arr,n);

}