const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


//  space complexity :O(n)
void Rearrange(int *arr,int n)
{
	vector<int> v;

	for(int i=0;i<n;i++)
	{
		v.push_back(arr[arr[i]]);

	}

	for(int i=0;i<n;i++)
		arr[i] = v.at(i);

	v.clear();

}

// Auxillary space : O(1)
void rearrange(int *arr,int n)
{
	for(int i=0;i<n;i++)
		arr[i] = ((arr[arr[i]]%n)*n) + arr[i];


	for(int i=0;i<n;i++)
		cout<<arr[i]/n <<" ";
	cout<<endl;
}


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];


    rearrange(arr,n);

	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}