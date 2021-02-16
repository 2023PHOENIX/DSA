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
    // last->next = head;

    return head;
}
bool detectLoop2(Node *head)
{
    unordered_set<Node*> S;

    Node *curr = head;
    while(curr)
    {
        if(S.find(curr)!=S.end())
            return true;
        else
            S.insert(curr);

        curr = curr->next;

    }
    return false;
}
bool detectLoop(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while(fast and fast->next)
    {
         slow = slow->next;
        fast = fast->next->next;



        if(fast==slow)
            return true;

       

    }


    return false;
}
bool detectLoopDummy(Node *head)
{
    Node *temp = new Node(0);
    Node *curr = head;

    while(curr)
    {
        if(curr->next==nullptr)
            return false;
        if(curr->next ==temp)
            return true;
        
            Node * currNext = curr->next;
            curr->next = temp;
            curr = currNext;
    }

    return false;

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
    Node *temp = new Node(37);

    
    auto Head = CreateLinkedList(v);
    // temp->next = Head;
    cout<<detectLoop(Head);
    cout<<detectLoop2(Head);

    cout<<detectLoopDummy(Head);
    // printLinkedList(Head);

   
}