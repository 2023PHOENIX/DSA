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

Node* newNode(int data)
{
	Node *node = new Node;
	node->left = node->right = NULL;
	node->data = data;
	return (node);
}


bool isIdentical(Node *root1,Node *root2)
{
	if(!root1 and !root2)
		return true;

	if(root1->data!=root2->data)
		return false;
	bool res_1 = isIdentical(root1->left,root2->left);
	bool res_2 = isIdentical(root2->right,root2->right);

	if(res_1==res_2)
		return true;
	return false;

}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

}