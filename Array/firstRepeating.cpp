const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int firstRepeating(int *arr,int n)
{
	set<int> hash;
	int minIndex = -1;
	for(int i=n-1;i>=0 ;i--)
	{
		if(hash.find(arr[i])!=hash.end())
			minIndex = i;
		else
			hash.insert(arr[i]);
	}

	return (minIndex==-1)?-1:minIndex;

}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<firstRepeating(arr,n);
}