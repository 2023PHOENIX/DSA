const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define Hmax 10000
struct Node
{
	int data;
	Node *left;
	Node *right;
};

Node * newNode(int d)
{
	Node *node = new Node;
	node->data = d;
	node->left = node->right = NULL;

	return (node);
}

void findNode(Node *root,int path[],bool visited[],int plength,int k)
{
	if(!root)
		return;

	path[plength] = root->data;
	visited[plength] =false;
	plength++;


	if(!root->left and !root->right and !visited[plength-k-1] and plength-k-1>=0){
		cout<<path[plength-k-1]<<" "; 
		visited[plength-k-1]=true;
		 return;
	}


	findNode(root->left,path,visited,plength,k);
	findNode(root->right,path,visited,plength,k);


}

void findKthNode(Node *root,int k)
{
	int path[Hmax];
	bool visited[Hmax] = {false};


	findNode(root,path,visited,0,k);
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    Node *root = newNode(1);
    root->left = newNode(3);
    root->left->left = newNode(5);
    root->left->left->left = newNode(7);
    root->left->left->right = newNode(8);
    root->left->left->right->right = newNode(9);

   findKthNode(root,4);
}