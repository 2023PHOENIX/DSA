const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void printQueue(priority_queue<int> pq)
{
    auto p = pq;

    while(!p.empty())
    {
        cout<<" "<<p.top();
        p.pop();
    }
}


// here Naive approach will have complexity : O(NlogN)
// but with priority queue : O(count*log(N)) + O(N)
int findCount(priority_queue<int,vector<int> , greater<int> > pq,int amount_left)
{

    int count = 0;


    while(!pq.empty() and amount_left >= pq.top())
    {
        amount_left -= pq.top();
        count++;
        pq.pop();
    }

    return count;
}   
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;  cin>>n;
    int amount_left;    cin>>amount_left;


    priority_queue<int,vector<int> ,greater<int>> pq;
    for(int i=0;i<n;i++)
    {
        int d;  cin>>d;
        pq.push(d);
    }

    cout<<findCount(pq,amount_left);
    // printQueue(pq);

}