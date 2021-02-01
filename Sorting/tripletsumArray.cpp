const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool tripletsum(int *arr,int n,int k)
{
	sort(arr,arr+n);
	int l,h;
	for(int i=0;i<n-2;i++)
	{
		l = i+1;
		h = n-1;

		while(l<h){
			if(arr[l]+arr[h]+arr[i]==k)
				return true;
			else if(arr[l]+arr[h]+arr[i]>k)
				h--;
			else 
				l--;
		}
	}
	return false;

}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;	cin>>n>>k;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<tripletsum(arr,n,k);
}