const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// Time Complexity : O(V*E)
void BFS(vector<int> adj[],int i,bool visited[])
{
    queue<int> qu;
    qu.push(i);
    visited[i] = true;

    while(!qu.empty())
    {
        int u = qu.front();
        qu.pop();

        cout<<u<<" ";
        for(int v : adj[u]){
            if(!visited[v])
            {
                qu.push(v);
                visited[v]  = true;
            }
        }
    }
    cout<<endl;
}
// Return : 
// connected component 
int BFSdis(vector<int> adj[],int v)
{
    bool visited[v+1];
    fill(visited,visited + sizeof(visited),false);
    int count = 0;
    for(int i=0;i<=v;i++)
    {
        if(!visited[i])
        {
            BFS(adj,i,visited);
            count++;
        }
    }

    return count;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    
    int v,e;    cin>>v>>e;

    vector<int> adj[v+1];

    for(int i=0;i<e;i++){
        int a,b;    cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int disconnect = BFSdis(adj,v);

    cout<<"disconnected components : "<< disconnect<<endl;
}