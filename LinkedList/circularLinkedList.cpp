#include<bits/stdc++.h>

using namespace std;

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
    last->next = head;

    return head;
}

void printLinkedList(Node *head)
{
    Node * p = head;
    p = p->next;

    cout<<head->data<<" ";
    while(p!=head)
    {
        cout<<p->data<<" ";
        p = p-> next;
    }
}
int main()
{
    int n;  cin>>n;
    vector<int> v(n);
    for(auto &i : v)cin>>i;

    auto Head = CreateLinkedList(v);

    printLinkedList(Head);

   
}