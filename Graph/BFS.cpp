const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void PrintGraph(vector<int> adj[],int v)
{
    for(int i=1;i<=v;i++)
    {
        for(int x : adj[i])
            cout<<x<<" ";
        cout<<"\n";
    }
}


void BFS(vector<int> adj[],int v)
{
    bool visited[v];
    fill(visited,visited + sizeof(visited),false);

    queue<int> qu;
    qu.push(1);
    visited[1] = true;

    while(!qu.empty())
    {
        int u = qu.front();

        qu.pop();

        cout<<u<<" ";

        for(int v : adj[u])
            {
                if(!visited[v])
                {
                    visited[v]  = true;
                    qu.push(v);
                }
            }
    }
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int v;  cin>>v;

    int e;  cin>>e;

    vector<int> adj[v+1];

    for(int i=0;i<e;i++)
    {
        int a,b;    cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    PrintGraph(adj,v);
    

    BFS(adj,1);


}