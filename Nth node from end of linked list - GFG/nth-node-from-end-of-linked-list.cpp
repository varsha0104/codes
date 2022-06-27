// { Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }

    cout<<getNthFromLast(head, k)<<endl;
    }
    return 0;
}// } Driver Code Ends


/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
/*
int getNthFromLast(Node *head, int n)
{
       // Your code here
    Node *p = head;
   Node *q = head;
   int i = n-1;    //4 //3
          
   while(i-- && p != NULL) 
       p = p->next; 
   
   if(p == NULL)
           return -1;
       
   while(p->next != NULL)
      {
          q = q->next;
          p = p->next;
      }
   return q->data;
}
*/


int getNthFromLast(Node *head, int n)
{
   // Your code here
   Node *temp = head;
   Node *temp1 = head;
   int count=0;
          
   while(temp!= NULL){
       count++;
       temp = temp->next; 
   }
      
      if(n>count){
          return -1;
      }
      
    count=count-n;
    
    for(int i=0;i<count;i++){
        temp1=temp1->next;
    }
 
   return temp1->data;
}



