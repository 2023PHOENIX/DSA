const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


// time complexity : O(N)
void LeftCeil(vector<int> &v)
{
	// just next element or element it self 

	cout<< -1 <<" ";
	set<int> s;		// set is self balancing red black tree
	s.insert(v[0]);

	for(int i=1;i<v.size();i++)
	{
		if(s.lower_bound(v[i])!=s.end())
			cout<<*(s.lower_bound(v[i]))<<" ";
		else
			cout<< -1 <<" ";


		s.insert(v[i]);	
	}
}

// Naive solution can be find smallest large element in left of current elem

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    vector<int> v(n);
    for(auto &i : v)
    	cin>>i;

    LeftCeil(v);
}