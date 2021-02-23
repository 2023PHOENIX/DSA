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

    Node(int data){
    	this->data = data;

    	left = NULL;
    	right = NULL;
    }


};

Node *lca(Node *root,int n1,int n2)
{
    if(!root)return NULL;

    if(root->data==n1 || root->data==n2)
            return root;

    Node *left_wing = lca(root->left,n1,n2);
    Node *right_wing = lca(root->right,n1,n2);


    if(left_wing and right_wing)
        return root;
    if(left_wing)
        return left_wing;

    if(right_wing)
        return right_wing;


    return nullptr;

}