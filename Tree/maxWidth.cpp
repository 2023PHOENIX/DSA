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


    int maxWidth(Node *root);

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

int Node :: maxWidth(Node *root)
{
    if(!root)
        return 0;

    queue<Node *> qu;

    qu.push(root);

    int maxCount = INT_MIN;
    while(qu.size()>0)
    {
        int count = qu.size();
        maxCount = max(maxCount,count);

        for(int i = 0 ; i < count ; i++)
        {
            Node *curr = qu.front();

            qu.pop();

            if(curr->left)
                qu.push(curr->left);
            if(curr->right)
                qu.push(curr->right);        
        
        }
    }

    return maxCount;
    
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    
    Node *head = new Node(12);
    head->left = new Node(13);
    head->right = new Node(29);

    head->left->right = new Node(98);
    head->left->left = new Node(36);
    head->right->right = new Node(100);

    cout<<head->maxWidth(head)<<endl;

    
}