const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int roofTop(int *arr,int n)
{
    int currMax = 0;
    int totalMax = 0;

    for(int i=1;i<n;i++)
    {
    	if(arr[i-1]<=arr[i])
    		currMax++;
    	else
    		currMax = 0;
    	totalMax = max(currMax,totalMax);
    }

    return totalMax;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int *arr = new int[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    roofTop(arr,n);
}