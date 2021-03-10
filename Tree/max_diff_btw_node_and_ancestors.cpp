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
	node->data = data;
	node->left = nullptr;
	node->right = nullptr;

	return (node);
}

int maxDiffUtil(Node *root,int *result )
{
	if(!root)
		return INT_MAX;

	if(!root->left and !root->right)
		return root->data;

	// find min value

	int minValue = min(maxDiffUtil(root->left,result),
						maxDiffUtil(root->right,result));



	*result = max(*result,root->data-minValue);

	return min(minValue,root->data);


}

int maxDiff(Node *root)
{
	int result = INT_MIN;

	maxDiffUtil(root,&result);

	return result;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = newNode(5);
    root->left = newNode(2);
    root->right = newNode(1);

    cout<<maxDiff(root);

}