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
	Node *prev;

	Node(int data){
		this->data = data;
		next = NULL;
		prev = NULL;
	}
};

Node* createLinkedList(int *arr,int n)
{

		Node *head = new Node(arr[0]);

		Node *last = head;

		for(int i=1;i<n;i++)
		{
			Node *temp = new Node(arr[i]);

			temp->prev = last;
			last->next = temp;
			last = temp;
		}

		return head;
}


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;	cin>>n;
    
    int *arr = new int[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    
	auto head = createLinkedList(arr,n);
	
	auto P = head;
	while(P)
	{
		cout<<P->data<<" ";
		P = P->next;
	}
	
	while(P->prev!=NULL)
	{
		P = P->prev;
		cout<<P->data<<" ";
		
	}
}
