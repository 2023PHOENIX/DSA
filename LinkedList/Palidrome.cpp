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
bool isPalindrom(Node *head)
{
    if(head==nullptr)
        return 0;

    if(head->next==nullptr)
        return 0;
    Node *slow{head};
    Node *fast{head};

    while(fast->next and fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;

    }

    Node *mid = reverseLinkList(slow->next);
    Node *curr = head;
    while(mid)
    {
        if(mid->data!=curr->data)
            return false;

        mid = mid->next;
        curr = curr->next;
    }

    return true;
}

bool checkUsingStack(Node *head)
{

    stack<int> st;
    for(Node *c = head;c;c = c->next){
        st.push(c->data);
    }

    for(Node *curr = head ; curr ; curr = curr->next)
    {
        if(st.top()!=curr->data)
            return false;
        st.pop();
    }

    return true;
        
}
int main()
{
    int n;  cin>>n;
    vector<int> v(n);
    for(auto &i : v)cin>>i;

    auto Head = CreateLinkedList(v);
    
    cout<<isPalindrom(Head);

   
}