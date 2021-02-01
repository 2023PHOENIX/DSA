const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// -5 1 -2 3 -1 2 -2


// complexity O(n)
int maxSum(int *arr,int n)
{
	int result{arr[0]};

	int maxEnding = arr[0];

	for(int i=1;i<n;i++)
		maxEnding = max(arr[i]+maxEnding,arr[i]); result = max(maxEnding,result);

	return result;

}

// complexity : O(n2)
int maximumSubArray(int *arr,int n)
{
	// 1 -2 3 -1 2

	int maxSum{INT_MIN};


	for(int i=0;i<n;i++)
	{
		int currSum = 0;

		for(int j=i;j<n;j++)
		{
			currSum += arr[j];
			maxSum = max(currSum,maxSum);
		}
	}
	return maxSum;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];


    cout<<maxSum(arr,n);
}