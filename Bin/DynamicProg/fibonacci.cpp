const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int fib(int n,int *dp)
{
	if(n==0 or n==1)
		return  n;
	if(dp[n]!=-1)
		return dp[n];
	return dp[n] = fib(n-1,dp) + fib(n-2,dp);

}

int main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif



    int n;	cin>>n;

    int *dp = new int[n+1];
    for(int i=0;i<=n;i++)
    	dp[i] = -1;

    cout<<fib(n,dp);

}