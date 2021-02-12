const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    string s;	cin>>s;

    int i{0};
    int j = s.length()-1;
    bool flag = true;
    while(i<=j)
    {
    	if(s.at(i)!=s.at(j))
    		flag = false; break;
    }

    (flag)?cout<<"Yes\n":cout<<"No\n";
}