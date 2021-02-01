const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    // 1 , (2,3) ,(4,5) , (6,7) ,(8,9)
    int t;	cin>>t;

    while(t--)
    {
    	int n,x;	cin>>n>>x;


    	if(n%2==0)
    	{
    		if(x%2!=0)
    		   x--;

    		int ind = x/2;
    		int sri = (n-x)/2;

    		cout<<min(ind,sri);

    	}
    	else
    	{
    		if(x%2==0)
    			x++;

    		int ind = x/2;
    		int sri = (n-x)/2;

    		cout<<min(ind,sri);
    	}
    	cout<<endl;

    }
}