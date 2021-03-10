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
    }
};

void Traversal(Node *root)
{

    map<int,list<int>> mp;

   queue<pair<Node *,int>> qu;
   qu.push({root,0});

   while(!qu.empty())
   {
       auto T = qu.front();
       qu.pop();
       
       Node *curr = T.first;
       int lh = T.second;

        mp[lh].push_back(curr->data);


        if(curr->left)
            qu.push({curr->left,lh-1});
        if(curr->right)
            qu.push({curr->right,lh+1});


   } 

   for(auto &i : mp)
   {
       for(auto it = i.second.begin();it!=i.second.end();it++)
       {
           cout<<*it<<" ";
       }
      
   }
}


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);

    Traversal(root);

}