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

Node *prev=nullptr,*first=nullptr,*second=nullptr;

// fixing the bst with two swaps
void fixBst(Node *root)
{
    if(!root)
        return;

    fixBst(root->left);

    if(prev and root->data<=prev->data)
        {
            if(!first)
                first = prev;
            second = root;
        }
        prev = root;
    
    fixBst(root->right);
}


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

      ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = new Node(4);  
    root->left = new Node(2);  
    root->right = new Node(5);  
    root->left->left = new Node(1);  
    root->left->right = new Node(3);  
      

}