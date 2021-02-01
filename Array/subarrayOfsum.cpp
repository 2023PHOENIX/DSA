const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


void findSum(int *arr,int n,int s)
{

	int i{0},sum{0},j{0};
	while(i<n)
	{

		if(sum<s)
			sum += arr[i];
		if(sum>s)
		{
			sum -= arr[j];
			j++;
		}
		if(sum==s)
		{
			cout<<j+1<<" "<<i+1<<endl;
			break;
		}
		i++;
	}

}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    int sum;	cin>>sum;
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    findSum(arr,n,sum);


}