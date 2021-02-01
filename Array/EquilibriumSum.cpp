const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


// complexity : O(n^2)
int equilibrium(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		int leftSum = 0;

		for(int j=0;j<i;j++)
			leftSum += arr[i];

		int rightsum = 0;

		for(int j=i+1;j<n;j++)
			rightsum+=arr[i];

		if(rightsum == leftSum)
			return i;

	}

	return -1;
}


// complexity O(n)
int Equilibrium(int *arr,int n)
{
	int totalSum = 0;
	for(int i=0;i<n;i++)
		totalSum += arr[i];

	int leftSum =0;
	for(int i=0;i<n;i++)
	{
		totalSum -= arr[i];

		if(leftSum==totalSum)
			return i;

		leftSum += arr[i];
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

    cout<<Equilibrium(arr,n);
}