const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

Node *buildBst(Node *root,int x)
{
    if(!root)
        return new Node(x);

    if(root->data > x)
        root->left = buildBst(root->left,x);
    else if(root->data < x)
        root->right = buildBst(root->right,x);

    return root;
}
Node *bstFrompreOrder(vector<int> &v)
{
    int n = v.size();
    Node *root = nullptr;
    for(auto x : v)
        buildBst(root,x);

    return root;

}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;
    vector<int> v(n);

    for(auto &i : v)cin>>i;


}