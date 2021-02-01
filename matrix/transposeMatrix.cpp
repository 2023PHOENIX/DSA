const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// AuxilarySpace : O(n+m)
void transpose(int *arr[],int n,int m)
{
	int temp[m][n];

	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			temp[i][j] = arr[j][i];

	for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			cout<<temp[i][j]<<" ";
		cout<<endl;
		}

}

void Atranspose(int *arr[],int n,int m)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<m;j++)
			swap(arr[i][j],arr[j][i]);

}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);


    int n,m;	cin>>n>>m;

    int *arr[n];
    for(int i=0;i<n;i++)arr[i] = new int[m];

    for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    		cin>>arr[i][j];

    Atranspose(arr,n,m);

    for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
				cout<<arr[i][j]<<" ";
			cout<<endl;
		}
}