const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int searchInFinite(vector<int> arr,int x)
{
	if(arr[0] == x)
		return 0;

	int i=1;

	while(arr[i]<x)
		i *= 2;

	if(arr[i]==x)return i;

	searchInFinite(arr,x,i/2+1,i-1);
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

   	vector<int> arr{10,15,20,25 ,30,35,40,45,50,55};
   	int x;	cin>>x;
   	cout<<searchInFinite(arr,x);
}