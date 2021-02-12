const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// works for only distinct elements
void findPattern(string &txt,string &pat)
{
	int n = txt.length();
	int m = pat.length();
	
	for(int i=0;i<=(n-m);)
	{
		int j;
		for(j=0;j<m;j++)
			if(txt[i+j] != pat[j])
				break;


		if(j==m)
			cout<<i<<" ";
		if(j==0)
			i++;
		else
			i = i+ j;
	}
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    string txt;	cin>>txt;

    string pat;	cin>>pat;


    findPattern(txt,pat);
}