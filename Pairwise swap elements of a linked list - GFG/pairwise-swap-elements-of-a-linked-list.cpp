// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/*
  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as

struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }

}*head;
*/
class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        /*
        if(head==0 || head->next==0)
            return head;
           Node* it1=head;
           Node* it2=head->next;
           it1->next=it2->next;
           it2->next=it1;
           head=it2;
           Node* temp;
           temp=it1;
           it1=it2;
           it2=temp;
           Node*i=it2;
           if(it2->next==0)
                return head;
           if(it2->next->next==0)
                return head;
           it1=it2->next;
           it2=it2->next->next;
           while(it1 && it2)
           {
               it1->next=it2->next;
               it2->next=it1;
               temp=it1;
               it1=it2;
               it2=temp;
               i->next=it1;
               i=it2;
               
               if(it2->next==0)
                    return head;
               if(it2->next->next==0)
                    return head;
                    
               it1=it2->next;
               it2=it2->next->next;
           }
       return head;
       */
       
       Node *first = head;
       Node *prev, *second, *next;
       
       while(first && first->next)
       {
           second = first->next;
           next = second->next;
           
           if(first == head)
               head = first->next;
           else
               prev->next = second;
               
           second->next = first;
           first->next = next;
           
           prev = first;
           first = next;
       }
       return head;
    }
};

// { Driver Code Starts.

void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
}

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		map<Node*, int> mp;
		mp[head] = head->data;
		for (int i = 0; i<n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
			mp[tail] = tail->data;
		}
		struct Node *failure = new Node(-1);
		Solution ob;
		head = ob.pairWiseSwap(head);
		int flag = 0;
		struct Node *temp = head;
		while(temp){
		    if(mp[temp] != temp->data){
		        flag = 1;
		        break;
		    }
		    temp = temp->next;
		}
		if(flag)
		    printList(failure);
		else
		    printList(head);
	}
	return 0; 
}
  // } Driver Code Ends