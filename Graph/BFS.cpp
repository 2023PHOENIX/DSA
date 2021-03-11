const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void code_out();
void fast_out();

void bfsHelper(vector<int> graph[],int v,bool visited[])
{
	visited[v] = true;

	queue<int> qu;
	qu.push(v);

	while(!qu.empty()){
		
		int v = qu.front();
		qu.pop();

		cout<<v<<" ";

		for(int u : graph[v])
		{
			if(!visited[u])
			{
				visited[u] = true;
				qu.push(u);
			}
		}

	}
}
void BFS(vector<int> graph[],int v)
{
	bool visited[v];
	fill(visited, visited + sizeof(visited),false);

	for(int i=0;i<v;i++)
	{
		if(!visited[i])
			bfsHelper(graph,i,visited);
	}
}


void dfsHelper(vector<int> graph[],int v,bool visited[])
{
	visited[v] = true;
	cout<<v<<" ";

	for(auto &u : graph[v])
	{
		if(!visited[u])
			dfsHelper(graph,u,visited);
	}
}


void DFS(vector<int> graph[],int v)
{
	bool visited[v];
	fill(visited,visited + sizeof(visited),false);

	dfsHelper(graph,0,visited);
}

void addEdge(vector<int> graph[],int v,int u)
{
	graph[u].push_back(v);
	graph[v].push_back(u);
}
int main()
{
   code_out();
   fast_out();

   int v,e;	cin>>v>>e;


   vector<int> graph[v];


   for(int i=0;i<e;i++)
   {
   	int a,b;	cin>>a>>b;
   	addEdge(graph,a,b);
   }
  
   cout<<"Depth first search : "<<endl;
  DFS(graph,v);

  cout<<endl;

  BFS(graph,v);



}


void fast_out()
{
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);
}
void code_out()
{
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    //this can be opted out if you want to print the output to the sublime console
    freopen("output.txt", "w", stdout);
	#endif
}