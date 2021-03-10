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

    Node(int data)
    {
        this->data = data;
        left = right = nullptr;
    }
};

Node* traversal(Node *root,int low)
{
    if(!root)
        return nullptr;
    
    queue<Node *> qu;
    qu.push(root);
    Node *curr{nullptr};

    Node *temp{nullptr};
    while(!qu.empty()){
        Node *curr = qu.front();
        qu.pop();

        if(curr->data>=low)
        {
            temp = curr;
            break;
        }

        if(curr->left)
            qu.push(curr->left);
        if(curr->right)
            qu.push(curr->right);
    }

    return temp;

}

void PrintBST(Node *root,int low,int high,vector<int> &v)
{
    if(!root)
        return;

    PrintBST(root->left,low,high,v);
    
    if(root->data <=high and root->data >=low)
    {
        v.push_back(root->data);
    }

    PrintBST(root->right,low,high,v);

    
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = new Node(17);
    root->left = new Node(4);
    root->right = new Node(18);

    root->left->left = new Node(2);
    root->left->right = new Node(9);
    int low,high;   cin>>low>>high;
    vector<int> v;
    Node *curr = traversal(root,low);

    PrintBST(curr,low,high,v);

    for(auto &i :v )
        cout<<i<<endl;

}