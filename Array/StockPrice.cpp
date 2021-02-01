const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// O(N2)

int MaxProfit(int *price,int start,int end)
{
	if(end<=start)
		return 0;
	int profit = 0;

	for(int i=start;i<end;i++)
	{
		for(int j=i+1;j<=end;j++)
			if(price[j]>price[i])
			{
				int currProfit = price[j]-price[i] + MaxProfit(price,start,i-1)+MaxProfit(price,j+1,end);
				profit = max(profit,currProfit);
			}
	}

	return profit;
}


// O(n)
int SellStock(int *arr,int n)
{
	int profit{0};

	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[i-1])
			profit += arr[i] -arr[i-1];
	}

	return profit;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    int *arr = new int[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<SellStock(arr,n);
}