const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int d = 101;	//prime number
const int q = 256;
void Rsearch(string &txt,string &pat)
{
	int j;
	int m = pat.length();
	int n = txt.length();
	int h = 1;
	
	for(int i=1;i<=m-1;i++)
		h = (h*d)%q;

	int p = 0 , t= 0;

	for(int i=0;i<m;i++)
	{
		p = (p*d + pat[i])%q;
		t = (t*d + txt[i])%q;
	}
	


	for(int i=0;i<=(n-m);i++)
	{
		if(p==t)
		{
			bool flag{true};
			for( j=0;j<m;j++)
				if(txt[i+j]!=pat[j])
					break;
			if(j==m)cout<<i<<" ";
		}
		if(i<n-m)
		{
			t = ((d*(t - txt[i]*h)) + txt[i+m])%q;
			if(t<0)
				t = t + q;
		}
	}
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    string s = "geeksforgeeks";
    string z = "eks";
    Rsearch(s,z);
}