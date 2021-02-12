const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void unionArray(int *arr,int *brr,int n,int m)
{
	unordered_set<int> hash;

	for(int i=0;i<n;i++)
		hash.insert(arr[i]);


	for(int i=0;i<m;i++){
		if(hash.find(brr[i])==hash.end())
			hash.insert(brr[i]);

	}

	cout<<hash.size()<<endl;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int m;	cin>>m;

    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

	int *brr = new int[m];

	for(int i=0;i<m;i++)
		cin>>brr[i];

	unionArray(arr,brr,n,m);
}
