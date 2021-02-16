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



Node *mergeLinkedList(Node *h1,Node *h2)
{
    Node *l1 = h1;
    Node *l2 = h2;
    if(l1==nullptr)return l2;
    if(l2==nullptr)return l1;
    // l1->data is always smaller than l2->data
    if(l1->data>l2->data){
        Node *temp = l1;
        l1 = l2;
        l2 = temp;
    }
    Node *head = l1;
    // we alway store answer which is smaller. 
    while(l1 and l2)
    {
        Node *temp{nullptr};

        while(l1 and l2 and l1->data<=l2->data){
            temp = l1;
            l1 = l1->next;
        }
        temp->next = l2;

        // swap both again because l2 is smaller right now
        Node *t = l1;
        l1 = l2;
        l2 = t;
    }

    return head;
}
int main()
{
    vector<int> v{5,7,9};
    vector<int> b{3,4,8,9};

    auto head1 = CreateLinkedList(v);
    auto head2 = CreateLinkedList(b);

    printLinkedList(head1);
    cout<<endl;
    printLinkedList(head2);
    cout<<endl;
    auto head = mergeLinkedList(head1,head2);
    printLinkedList(head);

   
}