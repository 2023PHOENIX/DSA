const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<vector<int>> stocks(int *arr,int n)
{
	vector<vector<int>> v;

	while(i<n-1)
	{
		vector<int> v1;
		while((i<n-1) and (arr[i+1]<=arr[i]))
			i++;

		if(i==n-1)
			break;

		v1.push_back(arr[i]);
		while(i<n-1 and price[i+1]>=price[i])
			i++;

		v1.push_back(arr[i-1]);


		v.push_back(v1);

	}

	return v;
}

// void stocks(int *arr,int n)	sudo code
// {
// 	if(n<=1)
// 		return;

// 	while(i<n)
// 	{
		

// 		while(i<n-1 and arr[i]>=arr[i+1])
// 			i++;
// 		if(i==n-1)
// 			return;

// 		v1.push_back(i);

// 		while(i<n-1 and arr[i]<arr[i+1])
// 			i++
// 		v1.push_back(i);
// 	}
// }

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];



}