const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> linearProbing(int hashsize,int *arr,int sizeofArray)
{
	vector<int> hash(hashsize,-1);

	int hs = hashsize;

	for(int i=0;i<sizeofArray;i++)
	{

		if(hs==0)
			return hash;
		int index = arr[i]%hashsize;

		// hs to counter the value where no vacent space;
		while(hash[index]!=-1)
			index = (index+1)%hashsize;

		hash[index] = arr[i];


		hs--;
	}

	return hash;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int hashsize;	cin>>hashsize;
    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    auto v = linearProbing(hashsize,arr,n);

    for(auto &i : v)
    	cout<<i<<" ";
}