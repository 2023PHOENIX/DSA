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
        left = nullptr;
        right = nullptr;
    }
};

void BottomVeiw(Node *root)
{
    if(!root)
        return;
    
    map<int,int> mp;

    queue<pair<Node *,int>> qu;

    qu.push({root,0});

    while(!qu.empty())
    {
        auto T = qu.front();

        qu.pop();

        Node *curr = T.first;
        int Th  = T.second;

        mp[Th] = curr->data;

        if(curr->left)
            qu.push({curr->left,Th-1});
        if(curr->right)
            qu.push({curr->right,Th+1});
    }

    for(auto &i : mp)
    {
        cout<<i.second<<" ";
    }
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = new Node(1);
    root->left = new Node(3);
    root->right = new Node(2);

    BottomVeiw(root);

}