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

Node :: Node(int data)
{
    this->data = data;
    left = right = nullptr;
    lcount = 0;
}

Node *insert(Node *root,int value)
{
    if(!root)
        return new Node(value);
    
    if(root->data>value)
        {
            root->left = insert(root->left,value);
            root->lcount++;
        }
    else 
        root->right = insert(root->right,value);

    return root;
}

Node *findkthSmallest(Node *root,int x)
{
    if(!root)
        return nullptr;

    int count = root->lcount +1;

    if(count==x)
        return root;
    // it mean it exit in left of root
    else if(count>x)
    {
        return findkthSmallest(root->left,x);
    }
    else   
    {   
        // here we ignore count element which lies in left of current root
       return  findkthSmallest(root->right,x-count);
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
    Node* res = findkthSmallest(root, k);
    if (res == NULL)
        cout << "There are less than k nodes in the BST";
    else
        cout << "K-th Smallest Element is " << res->data;
    return 0;

}