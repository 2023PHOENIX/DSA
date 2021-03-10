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


bool isPresent(Node *root,int value)
{
    if(!root)
        return false;
    if(root->data == value)
        return true;

    if(root->data>value)
       return isPresent(root->left,value);
    else
       return isPresent(root->right,value);
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    Node *node = newNode(20);
    node->left = newNode(15);
    node->left->right = newNode(18);
    node->left->left = newNode(12);
    node->left->left->left = newNode(7);

    node->right = newNode(30);
    node->right->right = newNode(40);
    node->right->left = newNode(35);
    node->right->right->right= newNode(50);
    node->right->right->right->right = newNode(80);

    cout<<isPresent(node,40)<<endl;

}