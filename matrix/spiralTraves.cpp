const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void printSpiral(int *arr[],int n,int m)
{
	int top = 0;
	int right = m-1;
	int left = 0;
	int bottom = n-1;

	while(top<=right and left<=right)
	{
		for(int i=left;i<=right;i++)
				cout<<arr[top][i]<<" ";
			top++;
		for(int i=top;i<=bottom;i++)
				cout<<arr[i][right]<<" ";
			right--;
		
		if(top>=right)
			for(int i=right;i>=left;i--)
				cout<<arr[bottom][i]<<" ";
			bottom--;

		if(left<=right)
			for(int i=bottom;i>=top;i--)
				cout<<arr[i][left]<<" ";
			left++;
	}
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);


    int n,m;	cin>>n>>m;

    int *matrix[n];

    for(int i=0;i<n;i++)matrix[i] = new int[m];


    for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    		cin>>matrix[i][j];

    printSpiral(matrix,n,m);
}