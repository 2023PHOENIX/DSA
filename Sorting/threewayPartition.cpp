const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


void threeway(int *arr,int n,int a,int b)
{
	int mid = 0;
	int high = n-1;
	int low = 0;

	while(mid<=high){
		if(arr[mid]<a)
			{
				swap(arr[mid],arr[low]);
				low++;
				mid++;
			}
		else if(arr[mid]>b)
		{
			swap(arr[high],arr[mid]);
			high--;

		}
		else 
			mid++;
	}
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    int a,b;	cin>>a>>b;
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    threeway(arr,n,a,b);
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}