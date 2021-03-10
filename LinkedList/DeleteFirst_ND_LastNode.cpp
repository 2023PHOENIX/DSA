const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Node
{
    public : 
        int data;
        Node *next;
};

Node* createLinklist(int *arr,int n)
{
    Node *head = new Node;
    head->data = arr[0];
    head->next = nullptr;

    Node * last = head;
    for(int i=1;i<n;i++){
   
    Node * temp = new Node;
    temp->data = arr[i];
    temp->next = nullptr;

    last->next = temp;
    last = temp; 

    }

    return head;
}
void printLinkList(Node *head)
{
        if(!head)
            return;
        
        cout<<head->data<<" ";
    printLinkList(head->next);
}

Node *deleteFirstNode(Node *head)
{
    head = head->next;
    return head;
}

void deleteLastNode(Node *head)
{
    while(head->next->next)
        head = head->next;

    head->next = nullptr;

    
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;
    int *arr = new int[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    auto head = createLinklist(arr,n);
    auto newhead = deleteFirstNode(head);

    deleteLastNode(newhead);
    printLinkList(newhead);
}
