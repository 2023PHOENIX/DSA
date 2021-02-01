const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int FindMajority(int *arr,int n)
{
	int result{0},count{1};

	for(int i=1;i<n;i++)
	{
		if(arr[result]==arr[i])
			count++;
		else
			count--;
		
		if(count==0){
			result = i;
			count = 1;
		}
	}
	count = 0;

	for(int i=0;i<n;i++)
	{
		if(arr[i]==arr[result])
			count++;
	}

	if(count<n/2)
		return -1;
	return result;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<FindMajority(arr,n);
}