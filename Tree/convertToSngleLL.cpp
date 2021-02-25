const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class TreeNode
{
    public:
        int data;
        TreeNode *left;
        TreeNode *right;
    
    TreeNode(int data)
    {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }

};

class Node
{
    public: 
        int data;
        Node *next;

    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};


void convert(Node *head,TreeNode *&root)
{
 
    /// convert from linked list to binary tree

    queue<TreeNode*> qu;

    root = new TreeNode(head->data);
    qu.push(root);


    while(qu.size()>0)
    {
        TreeNode * curr = qu.front();

        qu.pop();

        if(head)
            {
                head = 
            }
    }
}


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);

    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(50);


    Node *head = nullptr;
    convert(head,root);


    while(head)
    {
        cout<<head->data<<" ";

        head = head->next;
    }


    
}