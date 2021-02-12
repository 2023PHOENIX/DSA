const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void giveFreq(string s){

	int Hash[26] = {0};

	for(int i=0;i<s.length();i++)
		Hash[int(s[i]-'a')]++;

	for(int i=0;i<26;i++)
		if(Hash[i]>0)
		cout<<Hash[i] << " : "<<(char)(i+'a')<<endl;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    string s;	cin>>s;

   	giveFreq(s);
}