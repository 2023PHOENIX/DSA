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
    cout<<head->data<<" ";
    p = p->next;
    while(p!=head)
    {
        cout<<p->data<<" ";
        p = p-> next;
    }
}


int countlenght(Node *head)
{
    if(!head or !head->next or !head->next->next)    
        return head;


    Node *slow{head};
    Node *fast{head};

    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(slow!=fast and fast->next and fast );

    if(slow==fast){
    int count = 1;

    while(slow->next !=fast)
    {
        slow = slow->next;
        count++;
    }

    return count;
    }

    else
        return 0;
}

int main()
{
    int n;  cin>>n;
    vector<int> v(n);
    for(auto &i : v)cin>>i;

    auto Head = CreateLinkedList(v);

    printLinkedList(Head);

    cout<<endl;

    cout<<countlenght(Head);

   
}