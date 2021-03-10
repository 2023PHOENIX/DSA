const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool AreIdentical(Node *root,Node *S)
{
	if(!root and !S)
		return true;
	
	if(!root or !S)
		return false;

	return (root->data == S->data 
					and AreIdentical(root->left,S->left) and 
					AreIdentical(root->right,S->right));


}

bool subTree(Node *root,Node *S)
{
	if(!S)
		return true;
	if(!root)
		return false;

	if(AreIdentical(root,S)==true)
		return true;

	return (subTree(root->left,S)or(subTree(root->right,S));


}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);



}