const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int fact(int n)
{
	if(n==0)return 1;

	return n*fact(n-1);
}
int lexicographic(string &s)
{
	int n = s.length();

	int Hash[256] = {0};

	for(auto &i : s)
		Hash[i]++;

	// this is for duplicate values

	for(int i=1;i<256;i++)
		Hash[i] += Hash[i-1];

	int comb = fact(n);
	int result = 1;

	for(int i=0;i<n;i++){

		comb = comb/(n-i);

		result = result + Hash[s[i] -1]*comb;

		for(int j=s[i];j<256;j++)
			Hash[j]--;
	}

	return result;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    string s;	cin>>s;

    cout<<lexicographic(s);
}