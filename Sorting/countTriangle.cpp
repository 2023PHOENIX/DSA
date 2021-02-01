const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int triangles(int *arr,int n)
{
	int count =0;

	for(int i=0;i<n-2;i++)
	{
		int k = i+2;

		for(int j=i+1;j<n;j++)
		{
			while(k<n and arr[i]+arr[j]>arr[k])
				k++;
			if(k>j)
				count += k-j-i;
		}
	}


	return count;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<"count triangles : " <<triangles(arr,n);
}