const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void rotateByone(string &s)
{
	char c = s[0];

	for(int i=0;i<s.length()-1;i++)
		s[i] = s[i+1];
	s[s.length()-1] = c;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    string s;	cin>>s;

    
    for(int i=0;i<s.length()-2;i++)
    	rotateByone(s);
    cout<<s<<endl;
}