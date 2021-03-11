const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void SortByK(vector<int> &v,int k)
{
    int n = v.size();

    priority_queue<int,vector<int>,greater<int>> pq;


    for(int i=0;i<=k;i++)
        pq.push(v[i]);

    int index = 0;

    for(int i=k+1;i<n;i++)
    {
        v[index++] = pq.top();
        pq.pop();
        pq.push(v[i]);
    }

    while(!pq.empty())
    {
        v[index++] = pq.top();
        pq.pop();
    }
}



int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;  cin>>n>>k;
    vector<int> v(n);

    for(auto &i : v)cin>>i;

    SortByK(v,k);

    for(int &x : v)
        cout<<x <<" ";

}