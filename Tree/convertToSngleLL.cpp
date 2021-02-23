const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

void convertTotree(Node *head, TreeNode *&root)
{
    if (!head)
        root = nullptr;

    queue<TreeNode *> qu;

    root = new TreeNode(head->data);
    qu.push(root);

    head = head->next;

    while (head)
    {
        TreeNode *parent = qu.front();

        TreeNode *leftchild{nullptr}, *rightchild{nullptr};

        leftchild = new TreeNode(head->data);
        qu.push(leftchild);
        head = head->next;

        if (head)
        {
            rightchild = new TreeNode(head->data);
            qu.push(rightchild);
            head = head->next;
        }

        parent->left = leftchild;
        parent->right = rightchild;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *head = new Node(10);
    head->next = new Node(12);
    head->next->next = new Node(15);
    head->next->next = new Node(25);
    head->next->next->next = new Node(36);
}