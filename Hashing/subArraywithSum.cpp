const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// bool SubArraySum(int *arr,int n,int X)
// {
// 	int currsum= 0;
// 	for(int i=0;i<n;i++)
// 	{
// 		currsum = 0;
// 		for(int j=i;j<n;j++){
// 			currsum += arr[j];

// 			if(currsum == X)
// 				return true;
// 		}
// 	}
// 	return false;
// }

bool SubArraySum(int arr[],int n,int X)
{
	unordered_set<int> s;
	
	int prefix = 0;

	for(int i=0;i<n;i++)
	{
		if(prefix==X)
			return true;

		prefix += arr[i];
		 if(s.find(prefix-X)!=s.end())
				return true;
		
		s.insert(prefix);
	}

	return false;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    int X = 22;
    int arr[] = {5, 8, 6, 13, 3, -1};

    cout<<SubArraySum(arr,n,X)<<endl;
}