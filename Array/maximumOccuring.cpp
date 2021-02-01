const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// int maximumOccuring(int *L,int *R,int n,int m)
// {
// 	int arr[INT_MAX] = {0};

// 	for(int i=0;i<n;i++)
// 	{
// 		arr[L[i]]++;
// 		arr[R[i] + 1] -= 1;
// 	}
// 	int maxoccur = arr[0]; int result = 0;

// 	for(int i=1;i<maxoccur;i++)
// 	{
// 		arr[i] += arr[i-1];
// 		if(maxoccur<arr[i])
// 			maxoccur = arr[i]; result = i;
// 	}

// 	return result;
// }

 
int maximumOccuring(int *L , int *R , int n)
{
	
	int arr[1000000] = {0};

	int lastIndex = -1;
	for(int i=0;i<n;i++)
	{
		arr[L[i]]++;
		arr[R[i]+1]--;
		if(lastIndex<R[i])
			lastIndex = R[i];
	}

	int mSum = arr[0];
	int index{-1};

	for(int i=1;i<lastIndex+1;i++)
	{
		arr[i] += arr[i-1];// prefix sum
		if(mSum<arr[i])
			{
				mSum = arr[i];
				index = i;
			}
	}

	return index;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);


    int n;	cin>>n;
    
    int *arr = new int[n];
    int *brr = new int[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n;i++)cin>>brr[i];

    cout<<maximumOccuring(arr,brr,n);


}