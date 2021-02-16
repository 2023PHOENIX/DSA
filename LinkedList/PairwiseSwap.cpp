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

Node *pairwiseSwap(Node *head)
{
    if(head==nullptr or head->next==nullptr)
        return nullptr;

    Node *curr = head->next->next;
    // we need to swap in pairs 
    Node *prev = head;
    head = head->next;

    head->next = prev;

    while(curr and curr->next)
    {
        prev->next = curr->next;
        // we need to store the next->next element since we 
        // are going to break the link

        Node *Next = curr->next->next;

        curr->next->next = curr;
        prev = curr;
        curr = Next;


    }

    prev->next = curr;


    return head;



}
int main()
{
    int n;  cin>>n;
    vector<int> v(n);
    for(auto &i : v)cin>>i;

    auto Head = CreateLinkedList(v);
    
    auto H = pairwiseSwap(Head);
    printLinkedList(H);

   
}