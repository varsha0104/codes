// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    /*
    Node* rotate(Node* head, int k)
    {
        // Your code here
        struct Node *temp=head;
        int count=1;
          while(temp->next!=NULL){
            temp=temp->next;
            count++;
          }
          temp->next=head;
          
          temp=head;
          struct Node *temp2;
          for(int i=0;i<k;i++){
              temp2=temp;
              temp=temp->next;
          }
          temp2->next=NULL;
          head=temp;
          return head;
    }
    */
    
    Node* rotate(Node* head, int k)
    {
        // Your code here
        struct Node *cur=head;
        struct Node *tail=head;
        int count=1;
          while(tail->next!=NULL){
            tail=tail->next;
            count++;
          }
          if(k>count){
              k=k%count;
          }
          
          if(k==0){
              return head;
          }
          
          for(int i=1;i<k;i++){
              cur=cur->next;
          }
          tail->next=head;
          head=cur->next;
          cur->next=NULL;
          
          return head;
    }
};
    


// { Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}
  // } Driver Code Ends