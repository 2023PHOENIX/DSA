const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// hd : count 
void vSumRFill(Node *root,int hd,map<int,int> &mp)
{
    if(!root)
        return nullptr;
    
    vSumRFill(root->left,hd-1,mp);
    mp[hd] += root->data;
    vSumRFill(root->right,hd+1,mp);
}

void vsum(Node *root)
{
    map<int,int> mp;
    
    vSumRFill(root,0,mp);

    for(auto sum : mp)
        cout<<sum.secound<<" ";
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    
}