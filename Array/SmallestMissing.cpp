const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int SmallestMissing(int *arr,int n)
{
	bool Hash[n+1] = {false};

	for(int i=0;i<n;i++){
		if(arr[i]<=n)
			Hash[arr[i]] = true;
	}
	for(int i=1;i<=n;i++)
		if(Hash[i]==false)
			return i;
	return (n+1);
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<SmallestMissing(arr,n);
}