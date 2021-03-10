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


vector<int> LevelOrder(Node *root)
{
	vector<int> v;

	if(!root)
		return v
}

int main()
{

}