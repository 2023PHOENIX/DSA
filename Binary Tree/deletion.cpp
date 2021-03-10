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
    node->left = node->right = nullptr;

    return node;
}

void preOrder(Node *root)
{
    if(!root)
        return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}


Node* succ(Node *curr)
{
    curr = curr->right;

    while(curr and curr->left)
        curr = curr->left;
    

    return curr;
}


Node* deletion(Node *root,int value)
{
    if(!root)
        return nullptr;

    if(root->data>value)
        root->left = deletion(root->left,value);
    
    if(root->data<value)
        root->right = deletion(root->right,value);
    /// condition when root.data= value 
    else{
        if(root->left == nullptr)
        {
            Node *temp = root->left;
            delete root;

            return temp;
        }
        else if(root->left==nullptr)
        {
            Node *temp = root->right;
            delete root;

            return temp;
        }
        else{
            Node *findSucc = succ(root);
            
            root->data = findSucc->data;
            root->right = deletion(root->right,findSucc->data);
        }

    }
    return root;
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


    deletion(node,40);
    // deletion(node,80);
    preOrder(node);


}