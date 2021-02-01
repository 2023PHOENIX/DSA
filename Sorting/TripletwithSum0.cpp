const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int findtriplet(int *arr,int n){
	// simple two pointer approach will work here
	int found = 0;

	sort(arr,arr+n);
	for(int i=0;i<n-1;i++)
	{
		int l = i+1;
		int h = n-1;
		int x = arr[i];

		while(l<h){
			if(x + arr[l]+arr[h]==0)
			{	found++; l++;h--;	}
			else if(x+arr[l]+arr[h]<0)
				l++;
			else 
				h--;
		}
	}

	return found;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    	cout<<findtriplet(arr,n);
}