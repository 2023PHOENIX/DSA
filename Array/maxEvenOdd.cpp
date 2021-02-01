const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



int EvenOdd(int *arr,int n)
{
	int countMax{0};
	int counter{0};

	for(int i=0;i<n;i++)
	
{		counter = 1;
		for(int j=i+1;j<n;i++)
		{
			if((arr[i]%2==0 and arr[i-1]%2!=0) 
				or (arr[i]%2!=0 and arr[i-1]%2==0))
				counter++;
			else
				break;
		}

		countMax = max(countMax,counter);
	}

	return countMax;
}
// complexity : O(n)
int evenodd(int *arr,int n)
{
	int Imax{0};
	int counter{0};
	for(int i=1;i<n;i++)
	{

		if(arr[i]%2==0 and arr[i-1]%2!=0)
			counter++;
		else if(arr[i]%2!=0 and arr[i-1]%2==0)
			counter++;
		else
			counter=0;

		Imax = max(Imax,counter);
	}
	return Imax+1;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<EvenOdd(arr,n);
}