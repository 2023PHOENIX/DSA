// Given a sorted array of positive integers.
 // Your task is to rearrange  the array elements alternatively 
// i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.


// N = 6
// arr[] = {1,2,3,4,5,6}
// Output: 6 1 5 2 4 3
	// 61 52 43 34 25 16
	// 6 1 5 2 4 3 



const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// Auxillary space : O(N)
void rearrangeArray(int *arr,int n)
{

	vector<int> v;
	int low = 0;
	int high = n-1;
	while(low<high)
	{
	    v.push_back(arr[high]);
	    v.push_back(arr[low]);
	    
	    
	    high--;
	    low++;
	    
	}
	
	if(low==high)
	    v.push_back(arr[low]);
	    
	for(int i=0;i<n;i++)
	    arr[i] = v[i];
	 
	 v.clear();
	 

	
}

// Auxillary space : O(1)

void rearrange(int *arr,int n)
{
	int maxEle = arr[n-1];
	int minEle = arr[0];

	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			arr[i] = maxEle;
			maxEle--;
		}
		else
		{
			arr[i] = minEle;
			minEle++;
		}
	}
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    rearrange(arr,n);

	for(int i=0;i<n;i++)cout<<arr[i]<<" ";


}