const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int normalSum(int *arr,int n)
{
	int curr = arr[0];
	int result = arr[0];

	for(int i=1;i<n;i++)
	{
		curr = max(curr+arr[i],arr[i]);
		result = max(curr,result);
	}

	return result;
}
int circularSum(int *arr,int n)
{
	int result = normalSum(arr,n);

	if(result<0)
		return result;


	int currsum = 0;

	for(int i=0;i<n;i++)
	{
		currsum += arr[i];
		arr[i] = -arr[i];
	}





	int circular = currsum + normalSum(arr,n);
	result = max(circular,result);

	

	return result;

}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];


   	cout<<circularSum(arr,n);
}