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

    Node(int data);
};

Node :: Node(int data)
{
    this->data = data;
    left = right = nullptr;

}


void TopVeiw(Node *root,map<int,int > &mp)
{
	
	if(!root)
		return;

	queue<pair<int,Node*>> qu;
	qu.push({0,root});

	while(!qu.empty())
	{
		auto T = qu.front();
		qu.pop();

		Node *curr = T.second;

		int LH = T.first;

		if(mp.find(LH)==mp.end())
			mp[LH] = curr->data;

		if(curr->left)
			qu.push({LH-1,curr->left});
		if(curr->right)
			qu.push({LH+1,curr->right});

	}



	for(auto &i : mp)
		cout<<i.second<<" ";
	cout<<endl;
}





void BottonVeiw(Node *root,map<int,int> &mp)
{
	if(!root)
		return;

	queue<pair<int,Node *>> qu;
	qu.push({0,root});

	while(!qu.empty())
	{
		auto T = qu.front();

		Node * curr = T.second;

		int Th = T.first;

		mp[Th] = curr->data;

		qu.pop();

		if(curr->left)
			qu.push({Th-1,curr->left});
		if(curr->right)
			qu.push({Th+1,curr->right});

	}

	for(auto &i : mp)
	{
		cout<<i.second<<" ";
	}cout<<endl;
}



void preOrder(Node *root)
{
	if(!root)
		return;
	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);


}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->right->right = new Node(5);

    // preOrder(root);
    // cout<<endl;
   	map<int,int> mp;
   	TopVeiw(root,mp);

   	mp.clear();

   	BottonVeiw(root,mp);
}