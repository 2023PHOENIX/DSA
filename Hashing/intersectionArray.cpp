const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void intersection(int *arr,int *brr,int n,int m)
{
    // count distinct element
    unordered_set<int> s;

    for(int i=0;i<n;i++)
        s.insert(arr[i]);
    
    int count = 0;

    for(int j=0;j<m;j++)
    {
        if(s.find(brr[j])!=s.end())
            count++; s.erase(brr[j]);
    }
    cout<<count<<endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;    cin>>n>>m;
    
    int *arr = new int[n];
    int *brr = new int[m];

    for(int i=0;i<n;i++)cin>>arr[i];
    for(int j=0;j<m;j++)cin>>brr[j];

    intersection(arr,brr,n,m);
}