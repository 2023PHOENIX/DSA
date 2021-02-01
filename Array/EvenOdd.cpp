const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int MaxEvenOdd(int *arr , int n)
{	
	int maxCount{0};
	int current{0};
	for(int i=0;i<n-1;i++)
	{
		if((arr[i]%2==0 and arr[i+1]%2!=0) or (arr[i]%2!=0 and arr[i+1]%2==0))
			current++;
		else
		{	
			
			current = 0;
		}	
		maxCount = max(maxCount,current);	
	}

	return maxCount+1;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<MaxEvenOdd(arr,n);

	
}