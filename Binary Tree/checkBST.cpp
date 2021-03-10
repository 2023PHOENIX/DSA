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
};

Node :: Node(int data)
{
    this->data = data;
    left = right = nullptr;
}

// put every node in range 
// TC : O(N)
bool isBst(Node *root,int &mn,int &mx)
{
    if(!root)
        return true;

    return (root->data > mn and root->data<mx 
                and isBst(root->left,mn,root->data)
                and isBst(root->right,root->data,mx));
    
}
// using inorder traversal it can be done eficiently
// TC : O(N)
bool EffisBst(Node *root,int &prev)
{
    if(!root)
        return true;
    
    if(!EffisBst(root->left,prev))
        return false;
    
    if(root->data<=prev)
        return false;

    prev = root->data;


    return EffisBst(root->right,prev); 
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = new Node(4);  
    root->left = new Node(2);  
    root->right = new Node(5);  
    root->left->left = new Node(1);  
    root->left->right = new Node(3);  
      
    int prev = INT_MIN;
    if(EffisBst(root,prev))  
        cout<<"Is BST";  
    else
        cout<<"Not a BST";  
          
    // --> put end here <--

    int mn = INT_MIN;
    int mx = INT_MAX;
    if(isBst(root,mn,mx))  
        cout<<"Is BST";  
    else
        cout<<"Not a BST";  
          
    return 0;
    
}