const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Node
{
public:
	int data;
	Node *left;
	Node *right;

	Node(int data)
	{
		this->data = data;
		left = nullptr;
		right = nullptr;
	}
};


int findIndex(int *arr,int start,int end,int value)
{
	int i;
	for(i=start;i<=end;i++)
	{
		if(arr[i]==value)
			break;
	}

	return i;
}

Node *buildTree(int in[],int post[],int inStart,int inEnd,int *pIndex)
{
	if(inStart>inEnd)
		return nullptr;

	Node *node = new Node(post[*pIndex]);
	(*pIndex)--;

	if(inStart==inEnd)
			return node;

	int iIndex = findIndex(in,inStart,inEnd,node->data);

	node->right = buildTree(in,post,iIndex+1,inEnd,pIndex);
	node->left = buildTree(in,post,inStart,iIndex-1,pIndex);

	return node;
}

void preorder(Node *root)
{
	if(!root)
		return;
	cout<<root->data;
	preorder(root->left);
	preorder(root->right);
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

     int in[] = { 4, 8, 2, 5, 1, 6, 3, 7 };
    int post[] = { 8, 4, 5, 2, 6, 7, 3, 1 };
    int n = sizeof(in) / sizeof(in[0]);
 	int pIndex = n-1;
    Node *root = buildTree(in,post,0,n-1,&pIndex);

    preorder(root);

}