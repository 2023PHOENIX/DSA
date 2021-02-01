const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void merge3sort(int *arr,int *brr,int *crr,int n,int m ,int k)
{

}	

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;	cin>>n>>m>>k;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    int *brr = new int[m];
	int *crr = new int[k];

	for(int i=0;i<m;i++)cin>>brr[i];
	for(int i=0;i<k;i++)cin>>crr[i];

	merge3sort(arr,brr,crr,n,m,k);
}