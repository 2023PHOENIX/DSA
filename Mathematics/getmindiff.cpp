const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int getmin(int *arr,int n){

	sort(arr,arr+n);
	int currmin = INT_MAX;
	for(int i=0;i<n-1;i++){
		currmin = min(currmin,arr[i+1]-arr[i]);
	}

	return currmin;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<getmin(arr,n);
}