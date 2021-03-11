const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void addEdge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFSHelper(vector<int> adj[],int u ,bool visited[])
{
    visited[u] = true;

    cout<< u <<" ";

    for(auto &v : adj[u])
        if(!visited[v])
            DFSHelper(adj,v,visited);

    
}
void DFS(vector<int> adj[],int v)
{
    bool visited[v+1];
    fill(visited,visited + sizeof(visited),false);

    DFSHelper(adj,0,visited);
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int v,e;    cin>>v>>e;

    vector<int> adj[v+1];

	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3); 
	addEdge(adj,1,4);
	addEdge(adj,3,4);

    DFS(adj,v);



    
}