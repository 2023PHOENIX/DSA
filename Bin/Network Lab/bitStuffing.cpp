#include<bits/stdc++.h>

using namespace std;

string stringBinary(string s)
{
	int n = s.length();

	string str;
	for(int i=0;i<=n;i++)
	{
		int value = int(s[i]);
		// cout<<value<<endl;
		while(value>0)
		{
			(value%2==1)?str.push_back('1'):str.push_back('0');

			value /= 2;
		}

	}

	reverse(str.begin(),str.end());

	return str;
}
string Stuffing(string str)
{
	int i{0},j{0},count=0,k;
	int newSize{0};
	int n = str.length();
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<=(i+5);j++)
		{
			if(str[i]=='1')
				count++;	
		}
		if(count==6)
		{
			newSize = n + 2;
			for(int k=n+2;k>=(i+5);k--)
			{
				str[k] = str[k-1];
			}
			str[i+5] = '0';
			i = i+5;
		}
	
	}

	return str;
}

int main()
{
	string s;	cin>>s;
	

	Stuffing(stringBinary(s));
}