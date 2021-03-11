const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


// Returns : 
// print the graph 
void PrintGraph(vector<int> v[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int x : v[i])
            cout<<x<<" ";
    cout<<endl;
    }
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int v;  cin>>v;
    

    // adjacency list representation
    vector<int> V[v];

    int e;  cin>>e;

    for(int i=0;i<e;i++)
    {
        int a,b;    cin>>a>>b;

        V[a].push_back(b);
        V[b].push_back(a);
    }

    PrintGraph(V,v);


}