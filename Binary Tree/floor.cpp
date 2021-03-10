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


int floor(Node *root,int value)
{
    if(!root)
        return 0;
    if(!root->left and !root->right and root->data<value)
    {
        return root->data;
    }
    
    if(root->data == value) 
        return value;

    if(root->data>value)
       return floor(root->left,value);
    else
       return floor(root->right,value);
}


int iterativeFloor(Node *root,int value)
{
    if(!root)
        return 0;
    
    
    while(root){
        
        if(!root->left and !root->right)
        {
            if(root->data>value)
                return 0;
            else
                return root->data;

        }  

        if(root->data>value)
            root = root->left;
        else if(root->data < value)
            root = root->right;
        else    
            return root->data;

        
    }

    return root->data;
}

Node *itFloor(Node *root,int value)
{

    Node *result = nullptr;
    while(root)
    {
        if(root->data>value)
            root = root->left;
        else if(root->data<value){
            result = root;
            root = root->right;
        }

        else 
            result = root;
    }

    return result;
}
int main()
{
    Node *root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(15);
    root->right->left = newNode(12);
    root->right->right = newNode(30);

    int t;  cin>>t;

    while(t--)
    {
    
        int k; cin>>k;
        // cout<<floor(root,k)<<endl;
        cout<<iterativeFloor(root,k)<<endl;
        
    }
}