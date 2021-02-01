const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// complexity : O(N^2) - Navie approach
int trappingWater(int *arr,int n)
{
	int Lmax{arr[0]},Rmax{arr[n-1]};
 
 	int totalwater{0};
	for(int i=1;i<n-1;i++)
	{
		Lmax = max(Lmax,arr[i]);

		for(int j=i+1;j<n;j++)
			Rmax = max(Rmax,arr[j]);

		totalwater += min(Rmax,Lmax)-arr[i];
	}

	return totalwater;
}


// complexity O(N) Auxillay space : O(1)
// precomputation

int Trap(int *arr,int n)
{
	// 5 0 6 2 3
	// 5 5 6 6  6
	// 6 6 6 3 3 

	int Lmax[n] ={0};
	int Rmax[n] = {0};

	Lmax[0] = arr[0];

	for(int i=1;i<n;i++)
		Lmax[i] = max(Lmax[i-1],arr[i]);

	Rmax[n-1] = arr[n-1];

	for(int i=n-2;i>0;i--)
		Rmax[i] = max(Rmax[i+1],arr[i]);


	int water{0};

	for(int i=1;i<n-1;i++)
		water += min(Lmax[i],Rmax[i])-arr[i];

	return water;	

}	

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;

    int *arr = new int[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<Trap(arr,n);

}