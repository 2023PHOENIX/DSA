const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int tc;	cin>>tc;

    while(tc--)
    {
    	int n,m; cin>>n>>m;

    	char arr[n][m];
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<m;j++)
    			cin>>arr[i][j];
    	}

    	int total = n *m;
    	int answer1=0;
    	int answer2 = 0;
    	for(int i=0;i<n;i++)
  		{
  			for(int j=0;j<m;j++)
  				{
  					if(arr[i][j]=='.' and (i+j)%2==0)
  						answer1++;
  					if(arr[i][j]=='*' and (i+j)%2==1)
  						answer1++;
  				}
  		}  	

  		for(int i=0;i<n;i++)
  		{
  			for(int j=0;j<m;j++)
  				{
  					if(arr[i][j]=='*' and (i+j)%2==0)
  						answer2++;
  					if(arr[i][j]=='.' and (i+j)%2==1)
  						answer2++;
  				}
  		} 


  		if(total%2==0)
  			cout<<min(answer1,answer2)<<endl;
  		else
  			cout<<answer1<<endl;

    }
}