const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void twoRepeat(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[abs(arr[i])]<0)
			cout<<arr[i]<<endl;
		else
			arr[arr[i]] = -arr[arr[i]];
	}
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    twoRepeat(arr,n);
}