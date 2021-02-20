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

    int findHeight(Node *root);

    int findDiameter(Node *root);

    int findDiameter2(Node *root);


     
};
Node ::Node(int data)
{
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
}

int Node ::findHeight(Node *root)
{
    if (root == nullptr)
        return 0;
    
    return max(findHeight(root->left), findHeight(root->right)) + 1;
}
// Naive solution : O(N^2)
int Node :: findDiameter(Node *root)
{
    if(!root)return 0;

    int currH = findHeight(root->left) + findHeight(root->right) +1;

    int res1 = findDiameter(root->left);
    int res2 = findDiameter(root->right);

    return max(currH,max(res1,res2));
}

int res = 0;
// efficient solution O(N)
int Node :: findDiameter2(Node *root)
{
    if(!root)return 0;

    int Lh  = findDiameter2(root->left);
    int Rh = findDiameter2(root->right);

    res = max(res,Lh+Rh+1);

    return 1 + max(Lh,Rh);
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *head = new Node(12);
    head->left = new Node(13);
    head->right = new Node(29);

    head->left->right = new Node(98);
    head->left->left = new Node(36);
    head->right->right = new Node(100);

    cout<<"height of tree is : "<<head->findHeight(head)<<endl;
    cout<<"Naive approach sol : "<<head->findDiameter(head)<<endl;

    head->findDiameter2(head);
    cout<<"Efficient solution : "<<res<<endl;


   
}