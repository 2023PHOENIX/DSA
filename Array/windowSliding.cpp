const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int window(int *arr,int k,int n)
{
	int currSum = 0;

	for(int i=0;i<k;i++)currSum += arr[i];

	int maxSum = currSum;

	for(int i=k;i<n;i++)
	{
		currSum += arr[i]-arr[i-k];
		maxSum = max(maxSum,currSum);
	}

	return maxSum;
}

// find the array with given sum

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);


    int n,k;	cin>>n>>k;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<window(arr,k,n);
}