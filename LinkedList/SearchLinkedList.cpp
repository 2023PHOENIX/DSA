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

int SearchLinkedList(Node *head,int value)
{
    if(!head)
        return -1;
    if(head->data==value)
        return 1;

    else
    {
        int x = SearchLinkedList(head->next,value);
        if(x==-1)
            return -1;
        else
            return x+1;
    }
        
    

}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;
    int *arr = new int[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    int value;  cin>>value;

    auto head = createLinklist(arr,n);

    cout<<SearchLinkedList(head,value);

    // printLinkList(head);

    return 0;
}