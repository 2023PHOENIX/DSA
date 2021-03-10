#include <iostream>
#include <unordered_map>
using namespace std;
 
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin>>t;
	unordered_map<int, int> mp;
	while(t--) {
		int n;
		cin>>n;
		for(int i = 0; i < n; i++) {
			int x;
			cin>>x;
			mp[x]++;
		}
		long long int ans = 0;
		for(auto x : mp) {
			// each entry is a key value pair in hashmap ? 
			// pair<int, int> -> .first(key), .second(value)
			if(mp.count(2*x.first)) { // check whther we have 2*current element present in hashmap or not
				ans += mp[x.first]*mp[2*x.first];
			}
		}
		cout<<ans<<endl;
		mp.clear();
	}
	return 0;
}