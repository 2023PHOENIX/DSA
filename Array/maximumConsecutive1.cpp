const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// complexity : O(N2)
int maxcons(int *arr,int n)
{
	int ones{0};

	for(int i=0;i<n-1;i++)
	{
		int current{0};
		for(int j=i;j<n;j++)
		{
		
			if(arr[j]==1)
				current++;
			else
				break;

		}
		ones = max(ones,current);

		
	}

	return ones;
}

int maxOne(int *arr,int n)
{
	int ones{0};
	int counter{0};
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
			counter++;
		else
			{
			
			counter=0;
		}
		ones = max(ones,counter);
	}

	return ones;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<maxOne(arr,n);

}