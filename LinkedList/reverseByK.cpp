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

Node *reverseLinkedList(Node *head,int k)
{
    Node *curr = head;
    
    Node *prevHead = nullptr;
    bool isFirst{true};
    while(curr)
    {
        Node *first = curr;
        Node *prev = nullptr;
        int count = 0;

        while(count<k and curr)
        {
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        if(isFirst==true)
        {
            head = prev;
            isFirst = false;
        }
        else{
            prevHead->next = prev;
        }

        prevHead = first;

    }

    return head;
}
int main()
{
    int n;  cin>>n;
    vector<int> v(n);
    for(auto &i : v)cin>>i;

    int k;  cin>>k;

    
    auto Head = CreateLinkedList(v);
    


    auto head = reverseLinkedList(Head,k);
    

    printLinkedList(head);

   
}