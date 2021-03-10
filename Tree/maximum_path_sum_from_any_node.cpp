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

Node *newNode(int data)
{
	Node *node = new Node;
	node->left = node->right = NULL;
	node->data = data;
	return (node);
}

int findMaxSumUtil(Node *root,int &result)
{
	if(!root)
		return 0;

	int l = findMaxSumUtil(root->left,result);
	int r = findMaxSumUtil(root->right,result);


	int max_l_r = max(max(l,r)+root->data,max(l,r));

	int max_top = max(max_l_r,l+r+root->data);

	result = max(result,max_top);

	return max_l_r;


}


int findMaxSum(Node *root)
{
	int result = INT_MIN;

	findMaxSumUtil(root,result);

	return result;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = newNode(10);
    root->left = newNode(2);
    root->right = newNode(-25);
    root->left->left = newNode(20);
    root->left->right = newNode(1);
    root->right->right = newNode(4);
    root->right->left = newNode(3);

    cout<<findMaxSum(root);


}