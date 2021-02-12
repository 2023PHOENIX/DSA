const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool checkAnagram(string &s1 , string &s2)
{
	if(s1.length()!=s2.length())
		return false;

	int counter[256] = {0};

	for(int i=0;i<s1.length();i++)
		{
			counter[s1[i]]++;
			counter[s2[i]]--;

		}
	for(int i=0;i<256;i++)
		if(counter[i])
			return false;

	return true;

}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    string s1,s2;	cin>>s1>>s2;

   cout<<checkAnagram(s1,s2);
}