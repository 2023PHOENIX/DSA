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
};

Node :: Node(int data)
{
    this->data = data;
    left = right = nullptr;

}

// we can use set to find pair
bool PairSum(Node *root,int sum,unordered_set<int> &S)
{
    if(!root)return false;

    if(PairSum(root->left,sum,S)==true)
        return true;

    if(s.find(sum-root->data)!=S.end())
        return true;
    
    return PairSum(root->right,sum,S);
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    
    
}