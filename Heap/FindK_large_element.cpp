const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;    cin>>n>>k;

    priority_queue<int,vector<int>,greater<int>> pq;

    for(int i=0;i<k;i++)
    {
        int d;  cin>>d;
        pq.push(d);
    }

    for(int i=k+1;i<n;i++)
    {
        int d;  cin>>d;

        if(d>pq.top())
        {
            pq.pop();
            pq.push(d);
        }
    }


    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}