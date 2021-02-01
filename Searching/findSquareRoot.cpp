const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int find(int low,int high,int n)
{


	if(low>high)
		return -1;


	int mid = low + (high-low)/2;


	if((mid*mid<n and (mid+1)*(mid+1)>n) || mid*mid == n)

		return mid; 

	else if(mid*mid<n)
		return find(mid+1,high,n);
	else 
		return find(low,mid-1,n);
	
		
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;

    cout<<find(1,n,n);
    
    
}