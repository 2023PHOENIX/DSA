const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mHeight 1000;

struct Node
{
	int data;
	Node *left;
	Node *right;
};

Node *newNode(int data)
{
	Node *node = new Node;
	node->data = data;
	node->left = node->right = nullptr;

	return (node);
}



bool findPathUtl(Node *root,int value,vector<int> &path)
{
	if(!root)
		return false;

	if(root->data==value)
		return true;
	
	path.push_back(root->data);

	if(findPathUtl(root->left,value,path)==true || findPathUtl(root->right,value,path)==true)
		return true;

	path.pop_back();

	return false;
}


void findPath(Node *root,int value)
{
	if(!root)
		return;
	vector<int> v;

	findPathUtl(root,value,v);


	for(auto &i : v)
		cout<<i<<" ";
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);


    findPath(root,8);


}