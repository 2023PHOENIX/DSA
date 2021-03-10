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

Node *constructBinaryTree(Node *root,vector<int> &v,int i)
{
    if(!root)
        return nullptr;

    if(root->data > v[i])
    {
        root->left = new Node(v[i]);
        
    }
    if(root->data > v[i])
    {
        root->right = new Node(v[i]);
        
    }
    if(root->left)
        constructBinaryTree(root->left,v,i+1);
    if(root->right)
        constructBinaryTree(root->left,v,i+1);

    return root;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;
    vector<int> v(n);

    for(auto &i : v)
        cin>>i;

    


}