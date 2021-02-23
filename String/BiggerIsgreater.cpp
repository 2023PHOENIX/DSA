const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void lexigraphic(string s)
{
	for(int i=s.length()-1;i>=0;i--)
	{
		for(int j=i-1;j>=0;j--)
		{
			if(s[j]>s[i])
			{
				swap(s[j],s[i]);
				sort(s.begin()+j,s.end());
			}


		}
	}
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

   	string s;	cin>>s;

   	lexigraphic(s);

   	cout<<s<<endl;
}