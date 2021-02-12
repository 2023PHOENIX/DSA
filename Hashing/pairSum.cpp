const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool pairSum(int *arr,int n,int sum)
{
	unordered_set<int> s;
	// this is correct only
	// i/p 11 5 6 x = 5
	for(int i=0;i<n;i++)
	{	if(s.find(sum - arr[i])!=s.end())
			return true;
		s.insert(arr[i]);
	}
	return false;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    int sum;	cin>>sum;
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<pairSum(arr,n,sum);
}