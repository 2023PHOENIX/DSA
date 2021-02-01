const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(int n)
{
	if(n%3==0 and n%5==0)
		cout<<"Fork CPP\n";

    else if(n%3==0 and n%5!=0)
		cout<<"Fork\n";
	
	else if(n%5==0 and n%3!=0)
		cout<<"CPP\n";
	

	else 
		cout<<"";
    
  
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;	cin>>t;

    while(t--)
    {
    	int n;	cin>>n;

    	solve(n);
    }

}