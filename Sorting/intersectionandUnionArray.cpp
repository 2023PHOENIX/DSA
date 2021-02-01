const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void Union(vector<int> arr,vector<int> brr)
{
	int i{0},j{0};
	vector<int> v;
	while(i<arr.size() and j<brr.size())
	{
		if(arr[i]==arr[i-1] and i>0)
			{i++;continue;}
		if(brr[j]==brr[j-1] and j>0)
			{j++; continue;}



		if(arr[i]>brr[j])
		{
			v.push_back(brr[j]);j++;
		}
		else if(arr[i]<brr[j])
		{
			v.push_back(arr[i]);i++;
		}
		else {
			v.push_back(arr[i]);
			i++;
			j++;
		}
	}
	while(i<arr.size()){
		if(arr[i]!=arr[i-1] and j>0)
			v.push_back(arr[i]);
		i++;
	}
	while(j<brr.size()){
		if(brr[j]!=brr[j-1] and j>0)
			v.push_back(brr[j]);
		j++;
	}

	for(auto &i : v)
		cout<<i<<" ";
}

void intersection(vector<int> a,vector<int> b){
	int i{0},j{0};

	vector<int> v;
	// uniohn means those are common in both the arrays
	while(i<a.size() and j<b.size())
	{
		if(a[i]==a[i-1] and i>0)
			{i++;continue;}
		// if(brr[j]==brr[j-1] and j>0)
		// 	{j++; continue;}

		if(a[i]==b[j])
		{
			v.push_back(a[i]);
			i++; j++;
		}
		else if(a[i]>b[j])
		{
			j++;
		}
		else
			i++; 
	}

	for(auto &i : v)
		cout<<i<<" ";
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);


    vector<int> a {1,2,2,4,5,7};
    vector<int> b{2,2,4,6,8};


    Union(a,b);

    cout<<endl;

    intersection(a,b);
}