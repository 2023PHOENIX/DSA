const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data);
    void Preorder(Node *root);

    void Inorder(Node *root);

    void PostOrder(Node *root);

    int findHeight(Node *root);

    void spiralTravesal(Node *root);
};
Node ::Node(int data)
{
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
}
void Node::Preorder(Node *root)
{
    if (root == nullptr)
        return;

    cout << root->data << " ";
    Preorder(root->left);

    Preorder(root->right);
}

void Node::Inorder(Node *root)
{
    if (root == nullptr)
        return;

    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

void Node ::PostOrder(Node *root)
{
    if (root == nullptr)
        return;

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

// time complexity : O(N)
Node *buildTreeUtil(int in[],int post[],int inStart,int inEnd,int *index,unordered_map<int,int> &mp)
{
    if(inStart>inEnd)  
        return nullptr;
    
    int curr = post[*index];
    Node *node = new Node(curr);
    (*index)--;

    int iIndex = mp[curr];

    node->right = buildTreeUtil(in,post,iIndex+1,inEnd,index,mp);
    node->left = buildTreeUtil(in ,post,inStart,iIndex-1,index,mp);



    return node;
}
Node *buildTree(int in[],int post[],int n)
{
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++)
        mp[in[i]]=i;
    int index = n-1;

    return  buildTreeUtil(in,post,0,n-1,&index,mp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int in[] = {4, 8, 2, 5, 1, 6, 3, 7};
    int post[] = { 8, 4, 5, 2, 6, 7, 3, 1};

    int n = sizeof(in)/sizeof(in[0]);

    Node *root = buildTree(in,post,n);

    root->Inorder(root);
}