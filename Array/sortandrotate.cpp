const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



bool decreasing(int *arr,int n,int index)
{
	for(int i=index;i<n-1;i++)
	{
		if(arr[i]<arr[i+1])
			return false;
	}
	for(int i=0;i<index-1;i++)
	{
		if(arr[i]<arr[i+1])
			return false;
	}
	if(arr[0]>arr[n-1])
		return false;
	return true;
}

bool increasing(int *arr,int n,int index)
{
	for(int i=0;i<index-1;i++)
		if(arr[i]>arr[i+1])
			return false;

	for(int i=index;i<n-1;i++)
		if(arr[i]>arr[i+1])
			return false;

	if(arr[0]<arr[n-1])
		return false;

	return true;
}
bool sortedAndrotated(int *arr,int n)
{
	 int maxIndex{INT_MIN};

	 int minIndex{INT_MIN};

	 int max{INT_MIN},min{INT_MAX};
	 for(int i=0;i<n;i++)
	 {
	 	if(max<arr[i])
	 	{
	 		maxIndex = i; max = arr[i];
	 	}
	 	if(min>arr[i])
	 	{
	 		minIndex = i; min = arr[i];
	 	}
	}

	if(arr[minIndex + 1] == max)
	{
		return decreasing(arr,n,minIndex+1);
	}
	if(arr[maxIndex+1]==min)
	{
		return increasing(arr,n,maxIndex+1);
	}

	else
		return false;
}


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

   	cout<<sortedAndrotated(arr,n);

}