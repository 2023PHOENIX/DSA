const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int findRem(int n,int div)
{
	while(n%div==0)
	{	
		n = n/div;
	}

	return n;
}

bool IsUgly(int n)
{
	n = findRem(n,2);
	n = findRem(n,3);
	n = findRem(n,5);

	f


}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);


    int t;	cin>>t;

    while(t--)
    {
    	int n;	cin>>n;

    	cout<<IsUgly(n);
    }
}