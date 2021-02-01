// Input:
// N = 6
// height[] = {2,1,3,4,6,5}
// Output: 8

// Explanation: The heights are 2 1 3 4 6 5.
// So we choose the following buildings

// 2 1 3 4 6 5  and remove others. So total
// removed buildings is equal to 4, now the

// height of smaller one is 2. So answer is
// 2 * removed buildings = 2*4 = 8. There is
// no answer greater than this.

const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int maximumWater(int *arr,int n)
{
	int i{0},j{n-1};
	
	int maxWater{0};
	while(i<j)
	{
		int gap = j-i-1;

		int minWall = min(arr[i],arr[j]);

		maxWater = max(maxWater,gap*minWall);

		if(arr[j]<arr[i])
			j--;
		else
			i++;
		
	}

	return maxWater;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int t;	cin>>t;
    while(t--){
    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<maximumWater(arr,n)<<endl;
	}
}