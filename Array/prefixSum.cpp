const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int *prefixSum(int *arr,int n)
{
	int * prefix = new int[n];
	prefix[0] = arr[0];
	for(int i=1;i<n;i++)
		prefix[i] = prefix[i-1] + arr[i];

	return prefix;
}

int findPrefixSum(int *arr,int low,int high)
{
	if(low!=0)
		return arr[high] - arr[low-1];
	else
		return arr[high];
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);


    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    auto A = prefixSum(arr,n);

	cout<<findPrefixSum(A,1,3);

	

}