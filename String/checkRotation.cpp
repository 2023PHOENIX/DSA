const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void checkString(string &s,string &str)
{
	s = s + s;
	
	if(s.find(str)!=string::npos)
		cout<<"YES";
	else
		cout<<"NO";
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

   	string s;	cin>>s;
   	string str;	cin>>str;

   	checkString(s,str);
}