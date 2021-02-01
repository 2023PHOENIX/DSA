const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void rotate90(int *arr[],int n,int m)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<m;j++)
			swap(arr[i][j],arr[j][i]);

	for(int i=0;i<n;i++)
	{
		int low = 0;
		int high = m-1;

		while(low<high)
		{
			swap(arr[low][i],arr[high][i]);
			low++;	high--;
		}
	}


}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;	cin>>n>>m;
    int *mat[n];

    for(int i=0;i<n;i++)
    	mat[i] = new int[m];

    for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    		cin>>mat[i][j];

    	rotate90(mat,n,m);
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++)
    		cout<<mat[i][j]<<" ";
    	cout<<endl;
    }




}