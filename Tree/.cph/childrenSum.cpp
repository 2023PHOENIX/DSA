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

    bool childrenSum(Node *root);

    bool childrenSum2(Node *root);
    

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

bool Node :: childrenSum(Node *root)
{
        if(root==nullptr)
            return true;
        
        if(root->left and root->right)
        {
            if(root->left->data+root->right->data!=root->data)
                return false;
            
        }
        if(root->left and !root->right and root->left->data!=root->data)
            return false; 
        if(root->right and !root->left and root->right->data!=root->data)
            return false;
        
        return childrenSum(root->left);
        return childrenSum(root->right);


}

bool Node :: childrenSum2(Node *root)
{
    if(!root)
    return true;

    if(!root->left and !root->right)
        return true;
    
    int sum_node = 0;

    if(root->left)sum_node += root->left->data;

    if(root->right)sum_node += root->right->data;

    return (root->data==(sum_node) and
             childrenSum2(root->left) and 
                childrenSum2(root->right));
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    
    // Node *head = new Node(50);
    // head->left = new Node(10);
    // head->right = new Node(40);

    // head->left->right = new Node(5);
    // head->left->left = new Node(6);
    // head->right->right = new Node(40);

    Node *head = new Node(10);   
    head->left = new Node(8);
    head->right = new Node(2);
    head->right->left = new Node(2);
    

    // Node *head = new Node(20);
    // head->right = new Node(20);
    // head->right = new Node(12);
    // head->right->left = new Node(3);
    // head->right->right = new Node(9);
    // head->Inorder(head);
    // cout<<endl;
    // head->Preorder(head);
    // cout<<endl;
    // head->PostOrder(head);
    // cout<<endl;
    

    // cout<<head->findHeight(head);
    cout<<head->childrenSum2(head);


    
}