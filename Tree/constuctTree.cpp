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
};
Node ::Node(int data)
{
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
}

int preIndex = 0;
Node *cTree(int inorder[], int preorder[], int indexS, int indexE)
{
    if (indexS > indexE)
        return NULL;

    Node *root = new Node(preorder[preIndex++]);

    int Inindex;

    // find the curr node in inorder
    for (int i = indexS; i <= indexE; i++)
    {
        if (inorder[i] == root->data)
        {
            Inindex = i;
            break;
        }
    }

    root->left = cTree(inorder, preorder, indexS, Inindex - 1);
    root->right = cTree(inorder, preorder, Inindex + 1, indexE);

    return root;
}

void preorder(Node *head)
{
    if(!head)return;
   

    preorder(head->left);
    cout<<head->data<<" ";
    preorder(head->right);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int in[] = {20,10,40,30,50};
    int pre[] = {10,20,30,40,50};

    auto root = cTree(in,pre,0,4);
    
    preorder(root);







}