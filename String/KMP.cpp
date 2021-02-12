const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fillLps(string &txt,int *lps)
{
	int n = txt.length();

	int i = 1;
	int len = 0;

	lps[0] = 0;

	while(i<n){
		if(txt[i]==txt[len]){
			lps[i] = len; len++;i++;
		}
		else {
			if(txt[i]==0)
				lps[i] = 0;
			else
				lps[i] = lps[len-1];
		}
	}

}

void KmpAlgorithm(string &txt,string &pat)
{
	int n = txt.length();
	int m = pat.length();

	int *lps = new int[m];
	fillLps(pat,lps);

	int i=0,j=0;

	while(i<n){
		if(pat[i]==txt[j]){
			cout<<"Index found at "<<i-j;
				j = lps[j-1];
			}
		else if(i<n and pat[j]!=txt[i])
			if(j==0)
				i++;
			else
				j = lps[j-1];
	}
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    string txt = "ababcababaad";
    string pat = "ababa";

    KmpAlgorithm(txt,pat);

}