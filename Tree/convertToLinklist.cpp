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
    this->left = nullptr;
    this->right = nullptr;
}



Node *convertBTtoLL(Node *root)
{
    if(!root)return root;

    static Node *prev = nullptr;

    Node *head = convertBTtoLL(root->left);

    if(prev == nullptr)
        head = root;
    else{
        root->left = prev;
        prev->right = root;
    }

    prev =root;
    convertBTtoLL(root->right);

    return head;    
    
}

void printLL(Node *h)
{
    Node *curr = h;

    while(curr){
        cout<<curr->data<<" ";

        curr = curr->right;
    }cout<<endl;
}


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    
    Node *head = new Node(12);
    head->left = new Node(13);
    head->right = new Node(29);

    head->left->right = new Node(98);
    head->left->left = new Node(36);
    head->right->right = new Node(100);

    Node *h = convertBTtoLL(head);


    printLL(h);
    
}