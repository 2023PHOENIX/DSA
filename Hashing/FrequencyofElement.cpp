const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

unordered_map<int,int> frequency(int *arr,int n)
{
    unordered_map<int,int> map;

    for(int i=0;i<n;i++)
        map[arr[i]]++;


    return map;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;
    int *arr = new int[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    auto map = frequency(arr,n);

    for(auto it : map)
        cout<<it.first <<" "<<it.second<<endl;
}