const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool issubseq(string s,string sa,int n,int m)
{
	if(m==0)
		return true;
	if(n==0)
		return false;	
	if(s[m-1]==s[n-1])
		return issubseq(s,sa,n-1,m-1);
	else
		return issubseq(s,sa,n-1,m);
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    string s;	cin>>s;

 
    string sa;	cin>>sa;
    int n = s.length();
    int m = sa.length();
    // int index = 0;
    // bool flag = false;

    // int j = 0;
    
    // for(int i=0;i<n and j<m ;i++){
    // 	if(s[i]==sa[j])
    // 		j++;
    // }
    cout<<issubseq(s,sa,n,m)<<endl;
    // if(j==m)
    // 	cout<<"YES";
    // else
    // 	cout<<"NO";


}