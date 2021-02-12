const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int HAR = 256;
int nonRep(string &s)
{
	int count[HAR] = {0};

	for(int i=0;i<s.length();i++)
		count[s[i]]++;
	for(int i=0;i<s.length();i++)
		if(count[s[i]]==1)
			return i;
	return -1;			;
}

void NonRep(string &s)
{
	int count[HAR];
	// fill(count,count+HAR,-1);
	memset(count,-1,sizeof(count));
	// for(int i=0;i<HAR;i++)
	// 	count[i] = -1;
	for(int i=0;i<s.length();i++)
	{	
		if(count[s[i]]==-1)
			count[s[i]] = i;
		else
			count[s[i]] = -2;
	}
	int res = INT_MAX;
	for(int i=0;i<HAR;i++)
		if(count[i]>=0)
			res = min(res,count[i]);

	(res==INT_MAX)?cout<<-1:cout<<res;

}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    string s;	cin>>s;

   	cout<<nonRep(s);
}