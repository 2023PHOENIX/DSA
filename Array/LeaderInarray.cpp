const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void Leader(int *arr,int n)
{
	int leader = arr[n-1];
	cout<<leader;
	for(int i=n-2;i>=0;i--)
	{
		if(arr[i]>leader){
			cout<<arr[i];
			leader = arr[i];
		}
	}
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;

    int *arr = new int[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    Leader(arr,n);
}