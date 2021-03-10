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


int Insert(Node *root,int value){

    if(root->data == value) 
        return 0;
    if(root->data>value and !root->left)
        root->left = newNode(value);
    if(root->data<value and !root->right)
        root->right = newNode(value);


    if(root->data>value)
        return Insert(root->left,value);
    else
        return Insert(root->right,value);
}

Node * newInsert(Node *root,int value)
{
    if(!root)
        return newNode(value);
    
    if(root->data>value)
        root->left = newInsert(root->left,value);
    else if(root->data<value)
        root->right = newInsert(root->right,value);


    return root;
         
        
}

Node *iterativeInsert(Node *root,int value)
{
    Node *parent = nullptr;
    Node *temp = newNode(value);
    while(root)
    {
        parent = root;
        if(root->data<value)
            root = root->right;
        else if(root->data>value)
            root = root->left;
        else    
            return root;
        
    }
    if(!parent)
    {
        return newNode(value);
    }
    if(value>parent->data)
        parent->right = temp;
    else
        parent->left = temp;
}


void preorder(Node *root)
{
    if(!root)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
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

    cout<<Insert(node,10);

    preorder(node);
}