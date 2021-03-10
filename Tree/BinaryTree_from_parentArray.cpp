const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct Node
{
	int data;
	Node *left;
	Node *right;
};

Node *newNode(data)
{
	Node *node = new Node;
	node->data = data;
	node->left = node->right = nullptr;
}

void createNodeUtil(int parent[],int i, Node *create[],Node**root)
{
	if(create[i]!=NULL)
		return;

	create[i] = newNode[i];


	if(parent[i] == -1)
	{
		(*root) = newNode(i);
		return;
	}

	if(create[parent[i]]==NULL)
	{
		createNodeUtil();
	}


	Node *curr = create[parent[i]];

	if(curr->left)
		curr->left = create[i];
	else
		curr->right = create[i];



}

Node *createNode(int parent[],int n)
{
	Node *create[n];

	for(int i=0;i<n;i++)
		create[i] = NULL;
	Node *root = NULL;

	for(int i=0;i<n;i++)
		createNodeUtil(parent,i,create,&root);

	return root;
}


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int parent[7] = {-1,0,0,1,1,3,5};



}