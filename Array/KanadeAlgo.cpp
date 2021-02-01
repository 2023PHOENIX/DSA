const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int kanade(int *arr,int n)
{
	int maxSum{arr[0]};
	int currSum{0};
	for(int i=0;i<n;i++)
	{
		currSum = max(currSum+arr[i],arr[i]);

		maxSum = max(maxSum,currSum);
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

    cout<<kanade(arr,n);
}