const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;	cin>>n>>m;
    
    int **arr = new int*[n];

    for(int i=0;i<n;i++)
    	arr[i] = new int[m];


    for(int i=0;i<m;i++)
    	for(int j=0;j<n;j++)
    	{	arr[i][j] = 10;
    		cout<<arr[i][j]<<" ";
    	}

}