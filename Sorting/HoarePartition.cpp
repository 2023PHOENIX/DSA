const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b  = temp;
}
int HoarePartition(int *arr,int l,int h)
{
	int pivot  = arr[l];

	int i = l-1;
	int j = h+1;

	while(true)
	{
		do{
			i++;
		}while(pivot>arr[i]);
		do{
			j--;
		}while(pivot<arr[j]);
		
		if(i>=j)return j;
		swap(&arr[i],&arr[j]);
	}

}


void qsort(int *arr,int l,int h)
{
	if(l<h)
	{
		int P = HoarePartition(arr,l,h);

		qsort(arr,l,P);
		qsort(arr,P+1,h);
	}
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];
    qsort(arr,0,n-1);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}