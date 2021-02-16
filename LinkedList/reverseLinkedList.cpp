const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



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

Node *CreateLinkedList(vector<int> v)
{
    Node *head = new Node(v[0]);

    Node *last = head;

    for(int i=1;i<v.size();i++){
        Node *temp = new Node(v[i]);
        last->next = temp;
        last = temp;
    }

    return head;
}

void printLinkedList(Node *head)
{
    Node * p = head;

    while(p)
    {
        cout<<p->data<<" ";
        p = p-> next;
    }
}

Node *reverseLinkList(Node *head)
{
    Node *curr = head;
    Node *prev = nullptr;

    while(curr and curr->next)
    {
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    curr->next = prev;
    
    return curr;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

}