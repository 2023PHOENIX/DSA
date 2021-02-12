const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool subArrayZeroSum(int *arr,int n)
{
	unordered_set<int> s;

	int prefixSum = 0;

	for(int i=0;i<n;i++)
	{
		prefixSum+=arr[i];

		if(s.find(prefixSum)!=s.end())
			return true;


		if(prefixSum==0)
			return true;


		s.insert(prefixSum);
	}

	return false;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<subArrayZeroSum(arr,n);
}