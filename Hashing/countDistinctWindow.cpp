const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// O((n-k)*k*k)
void countDistinct(int *arr,int n,int x)
{
	
	
	for(int i=0;i<n;i++){
		int count = 0;
		unordered_set<int> s;
		for(int j=i;j<i+x;j++)
			{
				if(s.find(arr[j])==s.end())
					count++;
				s.insert(arr[j]);

				
			}cout<<count<<" ";
	}


	
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    int x;	cin>>x;
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

   countDistinct(arr,n,x);
}