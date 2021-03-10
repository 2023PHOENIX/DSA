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
    int lcount;

    Node(int data);

};
Node :: Node (int data)
{
    this->data = data;
    left = nullptr;
    right = nullptr;
    lcount = 0;

}

// since this is bst need to make insert function 

Node *insert(Node *root,int value)
{
    if(!root)
        return new Node(value);

    if(root->data > value)
    {
        root->left = insert(root->left,value);
        root->lcount++;
    }
    else if(root->data < value)
        root->right = insert(root->right,value);
    

    return root;
}

Node *KthSmallest(Node *root,int k)
{
    if(!root)
        return NULL;
    
    int c = root->lcount + 1;
    
    ///  c will give the position of root node
    if(c==k)
    {
        return root;
    }
    else if(c>k)
    {
        return KthSmallest(root->left,k);
    }
    else{
        // reject c element         
        return KthSmallest(root->right,k - c);
    }
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    	Node* root = NULL;
    int keys[] = { 20, 8, 22, 4, 12, 10, 14 };
 
    for (int x : keys)
        root = insert(root, x);
 
    int k = 4;
    Node* res = KthSmallest(root, k);
    if (res == NULL)
        cout << "There are less than k nodes in the BST";
    else
        cout << "K-th Smallest Element is " << res->data;
    return 0;

}