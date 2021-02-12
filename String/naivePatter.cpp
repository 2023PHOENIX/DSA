const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


void findPattern(string &text,string &pattern)
{
	int n = text.length();
	int m = pattern.length();

	for(int i=0;i<n-m;i++)
	{
		int j;
		for(j=0;j<m;j++)
			if(pattern[j]!=text[i+j])
				break;
		if(j==m)
			cout<<i<<" ";

	}
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    string s;	cin>>s;
    string pattern;	cin>>pattern;


    findPattern(s,pattern);
}