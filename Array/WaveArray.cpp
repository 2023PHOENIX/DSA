const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b ;
	*b = temp;
}


void WaveArray(int *arr,int n)
{
	for(int i=0;i<n-1;i+=2)
	{
		
		swap(&arr[i],&arr[i+1]);
	}

}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    WaveArray(arr,n);


   	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}