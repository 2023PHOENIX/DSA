const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


// N = 9
// A[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}

// Output:
// 6

// Explanation:

// In the given array A[1] < A[7]

// satisfying the required 

// condition(A[i] <= A[j]) thus giving 

// the maximum difference of j - i  which is 6(7-1).




// time complexity : O(n^2)
int maxIndex(int *arr,int n)
{
	int low{0},high{n-1};
	int maxIndex = 0;
	while(low<=high)
	{
		if(arr[low]<=arr[high])
		{
			maxIndex = max(maxIndex,high-low);
			low++;
			high = n-1;

		}

		else
			high--;
	}
	return maxIndex;
}

// time complexity : O(N)
int maxIndexEff(int *arr,int n)
{
	int *LeftMin = new int[n];

	int *RightMax = new int[n];

	LeftMin[0] = arr[0];
	for(int i=1;i<n;i++)
		LeftMin[i] = min(LeftMin[i-1],arr[i]);

	RightMax[n-1] = arr[n-1];
	for(int i=n-2;i>=0;i--)
		RightMax[i] = max(RightMax[i+1],arr[i]);



	int i = 0 , j= 0;
	int maxIndex = -1;
	while(i<n and j<n)
	{
		if(LeftMin[i]<RightMax[j])
		{
			maxIndex = max(maxIndex,j-i);
			j++;
		}
		else
		{
			i++;
		}
	}

	return maxIndex;

}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);


    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<maxIndexEff(arr,n);
}