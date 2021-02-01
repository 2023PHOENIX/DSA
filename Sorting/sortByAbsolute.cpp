const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void sortAbsolute(int *arr,int n,int x)
{
	stable_sort(arr,arr+n,[x](int a,int b)
		{ 
			if(abs(a-x)<abs(b-x)) return true;
			return false;
		});
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];
}