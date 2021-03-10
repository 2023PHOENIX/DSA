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

    Node(int data)
    {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

bool isBST(Node *root,Node *l = nullptr,Node *r = nullptr )
{
    if(!root)
        return true;

    if(l and root->data <= l->data)
        return false;
    if(r and root->data >= r->data)
        return false;
    
    return (isBST(root->left,l,root) and 
                isBST(root->right,root,r));
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = new Node(3);
    root->left        = new Node(2);
    root->right       = new Node(5);
    root->left->left  = new Node(1);
    root->left->right = new Node(4);

    cout<<isBST(root,NULL,NULL);


}