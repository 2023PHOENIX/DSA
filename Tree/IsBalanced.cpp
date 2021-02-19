const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
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

    bool isBalanced(Node *root);

    bool isBalanced2(Node *root);

};
Node :: Node(int data)
{
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
}
void Node::Preorder(Node *root)
{
    if(root==nullptr)
        return;
    
    cout<<root->data<<" ";
    Preorder(root->left);
    
    Preorder(root->right);
}

void Node:: Inorder(Node *root)
{
    if(root==nullptr)
        return;
    
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Node :: PostOrder(Node * root)
{
    if(root==nullptr)
        return;
    
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";

}

int Node :: findHeight(Node *root)
{
    if(root==nullptr)
        return 0;

    return max(findHeight(root->left),findHeight(root->right))+1;
}

bool Node :: isBalanced(Node *root)
{
    if(!root)return true;

    int Lh = findHeight(root->left);

    int Rh = findHeight(root->right);


    return (abs(Lh-Rh)<=1 and isBalanced(root->left) and isBalanced(root->right));
}

// Efficient solution : O(N)
bool Node :: isBalanced2(Node *root)
{  
    if(root==NULL)
        return 0;
    int lh=isBalanced(root->left);
    if(lh==-1)return -1;
    int rh=isBalanced(root->right);
    if(rh==-1)return -1;
    
    if(abs(lh-rh)>1)
        return -1; 
    else
        return max(lh,rh)+1;

}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    
    // Node *head = new Node(12);
    // head->left = new Node(13);
    // head->right = new Node(29);

    // head->left->right = new Node(98);
    // head->left->left = new Node(36);
    // head->right->right = new Node(100);

    Node *head = new Node(8);
    head->left = new Node(12);
    head->right = new Node(15);

    head->right->right = new Node(16);
    head->right->right->right = new Node(12);
    head->right->right->right->right = new Node(12);



    cout<<head->isBalanced2(head);

    
}