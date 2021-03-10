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


int Ceil(Node *root,int value){
    
    if(!root)
        return 0;

    int result = -1;

    while(root)
    {
        if(root->data < value)
            result = root->data;

        if(root->data == value) 
            return root->data;
        if(root->data>value)
        {
            result = root->data;
            root = root->left;
        }
        else{
            root  = root->right;
        }
    }

    return result;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(15);
    root->right->left = newNode(12);
    root->right->right = newNode(30);
    // int value;  cin>>value;
    cout<<Ceil(root,24)<<endl;

}