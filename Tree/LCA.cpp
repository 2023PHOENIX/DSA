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

    void Inorder(Node *root);
};

Node :: Node(int data)
{
    this->data = data;
    left = nullptr;
    right = nullptr;
}

void Node :: Inorder(Node *root){
    
    if(!root)return;

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

bool findPath(Node *root,vector<Node *> &v,int n)
{
    if(!root)return false;

    v.push_back(root);

    if(n==root->data)
        return true;

    if(findPath(root->left,v,n)==true or findPath(root->right,v,n)==true)
        return true;
    
    v.pop_back();

    return false;
}

Node * LCA(Node *root,int n1,int n2)
{
    vector<Node *> v1,v2;

    if((findPath(root,v1,n1)==false) or !findPath(root,v2,n2) )
        return nullptr;
    

    for(int i=0;i<v1.size()-1 and i<v2.size()-1;i++)
        if(v1[i+1]!=v2[i+1])
            return v1[i];
        
    return nullptr;
}


Node *lcaEfficient(Node *root,int n1,int n2)
{
    if(!root)return nullptr;

    if(root->data==n1 or root->data==n2)
        return root;

    Node *left_wing = lcaEfficient(root->left,n1,n2);

    Node *right_wing = lcaEfficient(root->right,n1,n2);

    if(left_wing and right_wing)
        return root;
    
    if(left_wing)
        return left_wing;

    if(right_wing)
        return right_wing;
    

    return nullptr;


}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->right->left->left = new Node(60);
    root->right->right->right = new Node(80);
    root->right->right->left = new Node(70);
    auto h = LCA(root,20,50);
    // root->Inorder(root);

    cout<<h->data<<endl;

    cout<<lcaEfficient(root,20,50)->data<<endl;
}