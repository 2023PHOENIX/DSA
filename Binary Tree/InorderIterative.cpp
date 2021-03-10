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


void InorderIterative(Node *root)
{
	stack<Node *> st;
	vector<int> v;
	Node *curr = root;
	// st.push(curr);
	while(curr or !st.empty())
		{
			// travese all the left values
			while(curr)
			{
				st.push(curr);
				curr = curr->left;
			}

			curr = st.top();
			st.pop();

			cout<<curr->data<<" ";
			// v.push_back(curr->data);

			curr = curr->right;

		}

	// for(auto &i : v)
	// 	cout<<i<<" ";
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->right->right = new Node(6);
    root->right->left = new Node(4);

    InorderIterative(root);


}