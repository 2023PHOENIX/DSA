const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void Tworepeated(int *arr,int n)
{
	pair<int,int> p;

	int a{-1},b{-1};

	bool visit[n+1];

	for(int i=0;i<n;i++)visit[i] = false;
	for(int i=0;i<n;i++)
	{
		visit[arr[i]]= true;

		if(visit[arr[i]]==true)
		{
			if(a!=-1)
				b = arr[i];
			else
				a = arr[i];
		}
	}

	cout<<a<<b;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

   	Tworepeated(arr,n);
}