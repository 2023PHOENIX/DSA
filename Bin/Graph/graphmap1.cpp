const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Graph
{
	public : 
	unordered_map<string, unordered_map<string,int>> mp;

	
	void InsertEdge(string u,string v,int wt,bool isWeighted = true)
	{
		mp[u][v] = wt;
		if(isWeighted)
			mp[v][u] = wt;
	}

	void printgraph(){

		for(auto &city : mp){
			cout<<city.first<<" ";
			for(auto &i : city.second)
				cout<<"("<<i.first<<"->"<<i.second<<")"<<"->";
			cout<<endl;
		}
		
	}

};

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    Graph g;
    g.InsertEdge("Delhi", "Mumbai", 350, true);
	g.InsertEdge("Delhi", "Bengaluru", 50, true);
	g.InsertEdge("Kolkata", "Mumbai", 30, true);
	g.InsertEdge("Chandigarh", "Goa", 35, true);
	g.InsertEdge("Delhi", "Goa", 765, true);
	g.InsertEdge("Varansi", "Indore", 230, true);
	g.InsertEdge("Mumbai", "Calicut", 300, true);
	g.InsertEdge("Kashmir", "Kamyakumari", 1350, true);
	g.printgraph();
	return 0;
}