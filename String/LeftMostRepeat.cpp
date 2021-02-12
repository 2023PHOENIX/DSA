const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// most efficient approach
int leftMost(string &s){
	bool visited[256]  = {0};
	int result = 0;
	for(int i = s.length()-1;i>=0;i--){
		if(visited[i])
			result = i;
		else
			visited[s[i]] =true; 
	}
	return result;
}
void leftMost(string &s)
{
	   unordered_map<char,int> mp;
	   int minIndex = INT_MAX  ;
	   for(int i=0;i<s.length();i++){
	   		if(mp.find(s[i])==mp.end())
	   			mp[s[i]] = i;
	   		else
	   			minIndex = min(minIndex,mp[s[i]]);

	   }

	   cout<<minIndex<<endl;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    string s;	cin>>s;

    leftMost(s);
}